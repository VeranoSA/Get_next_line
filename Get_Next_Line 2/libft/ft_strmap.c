/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 14:31:42 by tseanego          #+#    #+#             */
/*   Updated: 2019/06/01 14:47:29 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dst;
	char	*map;

	dst = NULL;
	map = NULL;
	if (s || f)
	{
		if (!(dst = ft_strnew(ft_strlen(s))))
			return (NULL);
		map = dst;
		if (s && f)
			while (*s)
				*dst++ = f((char)*s++);
	}
	return (map);
}
