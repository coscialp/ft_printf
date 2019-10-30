/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/29 14:24:42 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/29 14:44:53 by coscialp    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *fmt, ...)
{
	va_list		ap;
	t_printf	pf;

	va_start(ap, fmt);
	init_struct(pf);

	va_end(ap);
}
