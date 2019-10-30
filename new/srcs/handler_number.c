/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   handler_number.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/26 17:50:16 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 15:25:17 by coscialp    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

char			*ft_itoa_base_long(long long n, int ibase)
{
	char					*base;
	static char				buf[15] = {0};
	unsigned int			i;

	i = 13;
	base = "0123456789abcdef";
	while (1)
	{
		buf[i--] = base[n % ibase];
		n /= ibase;
		if (n == 0)
			break ;
	}
	return (ft_strdup(buf + 1 + i));
}

char			*ft_itoa_base_u(unsigned int n, char *base)
{
	static char	buf[12] = {0};
	int			i;
	int			ibase;

	i = 10;
	ibase = 16;
	while (1)
	{
		buf[i--] = base[n % ibase];
		n /= ibase;
		if (n == 0)
			break ;
	}
	return (ft_strdup(buf + 1 + i));
}

char			*ft_itoa_uns(unsigned int n)
{
	static char	buf[12] = {0};
	int			i;

	i = 10;
	while (1)
	{
		buf[i--] = n % 10 + '0';
		n /= 10;
		if (n == 0)
			break ;
	}
	return (ft_strdup(buf + 1 + i));
}
