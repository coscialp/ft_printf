/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   handler_number.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/26 17:50:16 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/26 17:57:03 by coscialp    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

char			*ft_itoa_base_long(long long n, int ibase)
{
	char					*base;
	static char				buf[12] = {0};
	unsigned int			i;
	unsigned int			neg;

	i = 10;
	base = "0123456789abcdef";
	if (n == INT_MIN)
		return (ft_strdup(STR_INT_MIN));
	neg = n < 0 ? -1 : 1;
	n = n < 0 ? -n : n;
	while (1)
	{
		buf[i--] = base[n % ibase];
		n /= ibase;
		if (n == 0)
			break ;
	}
	if (neg == -1)
		buf[i] = '-';
	return (neg == -1 ? ft_strdup(buf + i) : ft_strdup(buf + 1 + i));
}

char			*ft_itoa_base_pf(int n, int ibase, char *base)
{
	static char	buf[12] = {0};
	int			i;

	i = 10;
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
