/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:20:45 by tseanego          #+#    #+#             */
/*   Updated: 2019/06/16 14:09:09 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the putchar_fd function.
** The same as putchar except we output to a
** file descriptor instead of to the standard output.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
