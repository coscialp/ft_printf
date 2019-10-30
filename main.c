/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/26 18:06:58 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/30 10:18:39 by coscialp    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

int     main(int ac, char **av)
{
    char *str = "test";
    int nb = 16;
   ft_printf("mon printf  : |%s|  |%s|  |%s|\n", av[1], str, av[3]);
   printf("real printf : |%s|  |%s|  |%s|\n", av[1], str, av[3]);
    return (0);
}