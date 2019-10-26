/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   handler_field_width.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/26 19:28:35 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/26 20:26:26 by coscialp    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

char		*delete_width_field(char *str, char *nbr, size_t start)
{
	char	*tmp;
	int		i;
	int		x;
	int		j;

	i = 0;
	j = 0;
	x = 0;
	while (ft_isdigit(nbr[x]))
		x++;
	if(!(tmp = (char *)malloc(sizeof(char) * (ft_strlen((char*)str) - (x + 1)))))
		return (NULL);
	while (start--)
		tmp[j++] = str[i++];
	i += x;
	while (str[i])
	{
		tmp[j] = str[i];
		i++;
		j++;
	}
	tmp[j] = '\0';
	str = tmp;
	return (str);
}
