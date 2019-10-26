/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/26 16:12:42 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/26 20:11:46 by coscialp    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

/*
**┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
**┃                           structure ft_printf                             ┃
**┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

typedef struct		s_printf
{
	char	*flags;
	char	*convert;
	char	*current_string;
	char	curr_conv;
	char	current_flag;
	size_t	width;
	size_t	current_len;
	size_t	return_size;
}					t_printf;

/*
**┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
**┃                                prototype                                  ┃
**┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
*/

int					ft_printf(const char *format, ...);
char				*ft_itoa_base_long(long long n, int ibase);
char				*ft_itoa_base_pf(int n, int ibase, char *base);
char				*ft_itoa_uns(unsigned int n);
char				is_flag(char c, char *str);
char				*delete_flags(char *str, size_t index);
char			*delete_width_field(char *str, char *nbr, size_t start);
char				*convert_string(char cvt, t_printf pf, va_list ap);
t_printf			init_struct(t_printf pf);

#endif