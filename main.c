/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/26 18:06:58 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/26 20:25:47 by coscialp    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

int     main(int ac, char **av)
{
    char *str = "test";
    ft_printf("mon printf  : |%32s|\n", "test");
    printf("real printf : |%32s|\n", "test");
    return (0);
}