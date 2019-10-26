/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/13 17:01:56 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/26 20:23:21 by coscialp    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** char	*create_new_char_etoile_sa_mere_elle_twerk_sur_la_piste(char
** *billet_violet)
** {
** 	int		le_dance_floor;
** 	int		teil_de_champ;
** 	char	*la_moula;
** 	le_dance_floor = -1;
** 	teil_de_champ = 0;
** 	la_moula = (char *)malloc(sizeof(char) * (ft_strlen(billet_violet) + 1));
** 	while (billet_violet[++le_dance_floor])
** 	{
** 		if (billet_violet[le_dance_floor] == '%')
**	{
** 			// une_fonction_pour_insert_la_variable_dans_ta_chaine_de_
**		charactere_prototype_en_char_etoile_sa_mere_qui_twerk_sur_la_piste();
** 			le_dance_floor++;
** 		}
** 		la_moula[teil_de_champ] = billet_violet[le_dance_floor];
** 		teil_de_champ++;
** 	}
** 	la_moula[teil_de_champ] = NULL;
** 	return (la_moula);
**}
*/

int		ft_printf(const char *fmt, ...)
{
	va_list		ap;
	t_printf	pf;
	size_t		i;
	size_t		field;

	i = 0;
	field = 0;
	pf = init_struct(pf);
	va_start(ap, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%' && (pf.current_flag = is_flag(fmt[i + 1], pf.flags)))
			ft_putstr("Cas non traitee");
		if (fmt[i] == '%' && ft_isdigit(fmt[i + 1]))
		{
			pf.width = ft_atoi((char*)fmt + i + 1);
			//fmt = delete_flags((char*)fmt, i + 1);
			fmt = delete_width_field((char*)fmt, (char*)fmt + i + 1, i + 1);
		}
		if (fmt[i] == '%' && (pf.curr_conv = is_flag(fmt[i + 1], pf.convert)))
		{
			pf.current_string = convert_string(fmt[i + 1], pf, ap);
			pf.current_len = ft_strlen(pf.current_string);
			pf.return_size += pf.current_len;
			if (pf.current_flag == 0 && pf.width != 0)
			{
				while (field++ < (pf.width - pf.current_len))
					ft_putchar(' ');
			}
			ft_putstr(pf.current_string);
			ft_strdel(&pf.current_string);
			i++;
		}
		else
			ft_putchar(fmt[i]);
		i++;
	}
	va_end(ap);
	return (i);
}
