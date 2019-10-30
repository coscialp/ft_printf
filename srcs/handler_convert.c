/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   handler_convert.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/26 17:58:40 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/30 14:24:22 by coscialp    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

char	*exanger_convert(t_printf *pf, va_list ap)
{
	char	*tmp;

	if (pf->curr_conv == 'i' || pf->curr_conv == 'd')
		return (id_convert(pf, ap));
	else if (pf->curr_conv == 'u')
		return (u_convert(pf, ap));
	else if (pf->curr_conv == 'x')
		return (x_convert(pf, ap));
	else if (pf->curr_conv == 'X')
		return (upx_convert(pf, ap));
	else if (pf->curr_conv == 'p')
		return (p_convert(pf, ap));
	else if (pf->curr_conv == 's')
		return (s_convert(pf, ap));
	else if (pf->curr_conv == 'c')
		return (c_convert(pf, ap));
	return (NULL);
}

char	*p_convert(t_printf *pf, va_list ap)
{
	char	*tmp;

	if (!(tmp = ft_itoa_base_long(va_arg(ap, long long), 16)))
		return (0);
	return (ft_strfjoin("0x", tmp, 2));
}

char	*id_convert(t_printf *pf, va_list ap)
{
	return (ft_itoa(va_arg(ap, int)));
}

char	*u_convert(t_printf *pf, va_list ap)
{
	return (ft_itoa_uns(va_arg(ap, unsigned int)));
}

char	*upx_convert(t_printf *pf, va_list ap)
{
	return (ft_itoa_base_u(va_arg(ap, unsigned int), "0123456789ABCDEF"));
}

char	*x_convert(t_printf *pf, va_list ap)
{
	return (ft_itoa_base_u(va_arg(ap, unsigned int), "0123456789abcdef"));
}

char	*s_convert(t_printf *pf, va_list ap)
{
	return (ft_strdup(va_arg(ap, char *)));
}

char	*c_convert(t_printf *pf, va_list ap)
{
	char	*tmp;

	if (!(tmp = (char *)ft_calloc(sizeof(char), 2)))
			return (NULL);
		tmp[0] = va_arg(ap, int);
		return (tmp);
}
