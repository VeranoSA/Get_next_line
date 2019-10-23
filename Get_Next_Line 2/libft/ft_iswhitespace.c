/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 14:05:42 by tseanego          #+#    #+#             */
/*   Updated: 2019/05/30 15:05:03 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_iswhitespace() checks whether or not a character is considered a
** whitespace character, aka ' ', '\t', '\n', '\f', '\v' or '\r'
*/

int		ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\f'
		|| c == '\v' || c == '\r')
	{
		return (1);
	}
	return (0);
}
