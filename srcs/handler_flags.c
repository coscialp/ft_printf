/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   handler_flags.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/26 18:00:08 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/26 19:50:39 by coscialp    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

char		is_flag(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (str[i]);
		i++;
	}
	return (0);
}

char		*delete_flags(char *str, size_t index)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if(!(tmp = (char *)malloc(sizeof(char) * ft_strlen(str))))
		return (NULL);
	while (str[i])
	{
		if (i == index)
			i++;
		tmp[j] = str[i];
		i++;
		j++;
	}
	tmp[j] = '\0';
	str = tmp;
	return (str);
}