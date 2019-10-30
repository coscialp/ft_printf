/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   handler_display.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/28 15:10:09 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/30 14:15:45 by coscialp    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void	display_convert(t_printf *pf)
{
	size_t field;

	field = 0;
	pf->current_len = ft_strlen(pf->current_string);
	pf->return_size += pf->current_len;
	ft_putstr(pf->current_string);
	ft_strdel(&pf->current_string);
}
