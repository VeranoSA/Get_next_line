/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tseanego <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:14:34 by tseanego          #+#    #+#             */
/*   Updated: 2019/06/16 13:48:44 by tseanego         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Recreation of the lstdel function.
** This function deletes a list.
** to test: uncomment main
** gcc -Wall -Wextra -Werror ft_lstnew.c ft_memdel.c
** ft_lstdel.c ft_memcpy.c ft_memalloc.c
*/

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*i;

	if (*alst)
	{
		while ((*alst) && alst)
		{
			i = (*alst)->next;
			(*del)((*alst)->content, (*alst)->content_size);
			ft_memdel((void **)alst);
			*alst = i;
		}
	}
	(*alst) = NULL;
}
/*
**void	freefunct(void *d, size_t s)
**{
**	free(d);
**	(void)s;
**}
**
**int		main(void)
**{
**	t_list	*begin;
**	size_t	v;
**
**	v = 1;
**	begin = ft_lstnew(&v, sizeof(void *));
**	begin->next = ft_lstnew(&v, sizeof(void *));
**	begin->next->next = ft_lstnew(&v, sizeof(void *));
**	ft_lstdel(&begin, freefunct);
**	if (begin != NULL)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
