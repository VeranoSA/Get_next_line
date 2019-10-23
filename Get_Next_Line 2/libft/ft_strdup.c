/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:17:37 by tseanego          #+#    #+#             */
/*   Updated: 2019/05/24 10:43:22 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *src)
{
	char	*dup;
	size_t	sz;

	sz = ft_strlen(src);
	if (!(dup = malloc((sz + 1) * sizeof(char))))
		return (NULL);
	return (ft_strcpy(dup, src));
}
