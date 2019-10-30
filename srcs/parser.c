/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   parser.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:17:58 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/30 10:26:34 by coscialp    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	parser_fmt(t_printf *pf, va_list ap, char *fmt)
{
	size_t i;

	i = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%' && (pf->curr_conv = is_flag(fmt[i + 1], pf->convert)))
		{
			pf->current_string = exanger_convert(pf, ap);
			display_convert(pf);
			i++;
		}
		else if (fmt[i] != '%')
			ft_putchar(fmt[i]);
		i++;
	}
}
