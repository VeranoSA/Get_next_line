/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 13:47:44 by tseanego          #+#    #+#             */
/*   Updated: 2019/05/26 13:48:17 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t n)
{
	size_t	len_td;

	len_td = ft_strlen(tofind);
	if (!*tofind)
		return ((char *)str);
	while (*str && n-- >= len_td)
	{
		if (*str == *tofind && ft_memcmp(str, tofind, len_td) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
