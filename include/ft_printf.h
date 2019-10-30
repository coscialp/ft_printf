/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/26 16:12:42 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/30 14:13:14 by coscialp    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
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
	int		current_flag[6];
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
char				*ft_itoa_base_u(unsigned int n, char *base);
char				*ft_itoa_uns(unsigned int n);
int					all_flags(char *fmt, t_printf *pf);
char				is_flag(char c, char *str);
char				*delete_flags(char *str, size_t index);
char				*delete_width_field(char *str, char *nbr, size_t start);
void				display_p_convert(t_printf *pf);
void				parser_fmt(t_printf *pf, va_list ap, char *fmt);
char				*exanger_convert(t_printf *pf, va_list ap);
void				display_convert(t_printf *pf);
char				*p_convert(t_printf *pf, va_list ap);
char				*c_convert(t_printf *pf, va_list ap);
char				*s_convert(t_printf *pf, va_list ap);
char				*id_convert(t_printf *pf, va_list ap);
char				*u_convert(t_printf *pf, va_list ap);
char				*upx_convert(t_printf *pf, va_list ap);
void				free_struct(t_printf *pf);
char				*x_convert(t_printf *pf, va_list ap);
void				init_struct(t_printf *pf);

#endif