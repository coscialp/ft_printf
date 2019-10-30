/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/13 17:01:56 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/30 14:12:53 by coscialp    ###    #+. /#+    ###.fr     */
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
	t_printf	*pf;
	char		*fmt_tmp;

	if (!(pf = (t_printf*)malloc(sizeof(t_printf))))
		return (-1);
	init_struct(pf);
	fmt_tmp = ft_strdup(fmt);
	va_start(ap, fmt);
	parser_fmt(pf, ap, fmt_tmp);
	free(fmt_tmp);
	free_struct(pf);
	va_end(ap);
	return (0);
}
