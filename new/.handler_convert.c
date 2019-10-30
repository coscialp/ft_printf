/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   handler_convert.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/26 17:58:40 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/29 16:27:09 by coscialp    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

char	*convert_string(t_printf *pf, va_list ap)
{
	char	*tmp;

	if (pf->curr_conv == 'i' || pf->curr_conv == 'd')
		return (ft_itoa(va_arg(ap, int)));
	else if (pf->curr_conv == 'u')
		return (ft_itoa_uns(va_arg(ap, unsigned int)));
	else if (pf->curr_conv == 'x')
		return (ft_itoa_base_u(va_arg(ap, unsigned int), "0123456789abcdef"));
	else if (pf->curr_conv == 'X')
		return (ft_itoa_base_u(va_arg(ap, unsigned int), "0123456789ABCDEF"));
	else if (pf->curr_conv == 'p')
		return (p_convert(pf, ap));
	else if (pf->curr_conv == 's')
		return (ft_strdup(va_arg(ap, char *)));
	else if (pf->curr_conv == 'c')
	{
		if (!(tmp = (char *)ft_calloc(sizeof(char), 2)))
			return (NULL);
		tmp[0] = va_arg(ap, int);
		return (tmp);
	}
	return (NULL);
}

char	*p_convert(t_printf *pf, va_list ap)
{
	char	*tmp;
	size_t	field;
	size_t	len;
	char	*tmp_flag;

	field = 0;
	tmp = ft_itoa_base_long(va_arg(ap, long long), 16);
	len = ft_strlen(tmp);
	if (pf->current_flag[1] == 1 && pf->width > len)
	{
		if (!(tmp_flag = (char *)malloc(sizeof(char) * (pf->width - len + 2))))
			return (NULL);
		ft_memcpy(tmp_flag, "0x", 3);
		while (field++ < (pf->width - len - 2))
			tmp_flag = ft_strfjoin(tmp_flag, "0", 1);
		return (ft_strfjoin(tmp_flag, tmp, 3));
	}
	return (ft_strfjoin("0x", tmp, 2));
}
