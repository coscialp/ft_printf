/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   convert.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/26 17:58:40 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/26 20:21:51 by coscialp    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

char	*convert_string(char cvt, t_printf pf, va_list ap)
{
	char	*tmp;

	if (pf.curr_conv == 'i' || pf.curr_conv == 'd')
		return (ft_itoa(va_arg(ap, int)));
	else if (pf.curr_conv == 'u')
		return (ft_itoa_uns(va_arg(ap, unsigned int)));
	else if (pf.curr_conv == 'x')
		return (ft_itoa_base_pf(va_arg(ap, int), 16, "0123456789abcdef"));
	else if (pf.curr_conv == 'X')
		return (ft_itoa_base_pf(va_arg(ap, int), 16, "0123456789ABCDEF"));
	else if (pf.curr_conv == 'p')
	{
		tmp = ft_itoa_base_long(va_arg(ap, long long), 16);
		return (ft_strfjoin("0x", tmp, 2));
	}
	else if (pf.curr_conv == 's')
		return (ft_strdup(va_arg(ap, char *)));
	else if (pf.curr_conv == 'c')
	{
		if (!(tmp = (char *)ft_calloc(sizeof(char), 2)))
			return (NULL);
		tmp[0] = va_arg(ap, int);
		return (tmp);
	}
	return (NULL);
}
