/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 15:10:25 by tseanego          #+#    #+#             */
/*   Updated: 2019/06/16 14:07:59 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the putchar function.
** This function prints c to the standard output.
** to test: uncomment main
** run gcc -Wall -Wextra -Werror
** ft_putchar.c ft_putstr.c ft_strlen.c
*/

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
**int		main(void)
**{
**	ft_putstr("\033[36mTest 1: input \"a\"\n\033[0m");
**	putchar('a');
**	putchar('\n');
**	ft_putchar('a');
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 2: input \"1\"\n\033[0m");
**	putchar('1');
**	putchar('\n');
**	ft_putchar('1');
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 3: input \"0\"\n\033[0m");
**	putchar('0');
**	putchar('\n');
**	ft_putchar('0');
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 4: input \"%\"\n\033[0m");
**	putchar('%');
**	putchar('\n');
**	ft_putchar('%');
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 5: input \"$\"\n\033[0m");
**	putchar('$');
**	putchar('\n');
**	ft_putchar('$');
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 6: input \"A\"\n\033[0m");
**	putchar('A');
**	putchar('\n');
**	ft_putchar('A');
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 7: input \"~\"\n\033[0m");
**	putchar('~');
**	putchar('\n');
**	ft_putchar('~');
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 8: input \"[\"\n\033[0m");
**	putchar('[');
**	putchar('\n');
**	ft_putchar('[');
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 9: input \"\\\"\n\033[0m");
**	putchar('\\');
**	putchar('\n');
**	ft_putchar('\\');
**	ft_putchar('\n');
**	ft_putstr("\033[36mTest 10: input \"^\"\n\033[0m");
**	putchar('^');
**	putchar('\n');
**	ft_putchar('^');
**	ft_putchar('\n');
**}
*/
