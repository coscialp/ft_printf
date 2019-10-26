/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   handler_struct.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/26 18:01:41 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/26 18:30:05 by coscialp    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	init_struct(t_printf pf)
{
	pf.flags = "-0.*";
	pf.convert = "cpidusxX";
	pf.width = 0;
	pf.return_size = 0;
	pf.curr_conv = 0;
	pf.current_flag = 0;
	pf.current_string = NULL;
	return (pf);
}
