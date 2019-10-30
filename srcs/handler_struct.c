/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   handler_struct.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/26 18:01:41 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/30 14:24:02 by coscialp    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

void		init_struct(t_printf *pf)
{
	int i;

	i = 5;
	pf->flags = ft_strdup("-0.*");
	pf->convert = ft_strdup("cpidusxX");
	pf->width = 0;
	pf->return_size = 0;
	pf->curr_conv = 0;
	while (i--)
		pf->current_flag[i] = 0;
	pf->current_string = NULL;
}

void		free_struct(t_printf *pf)
{
	free(pf->flags);
	free(pf->convert);
	free(pf);
}
