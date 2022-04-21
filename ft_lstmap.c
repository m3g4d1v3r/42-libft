/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:45:25 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/21 00:19:43 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_reverse_lst(t_list *curr)
{
	t_list	*prev;
	t_list	*next;

	prev = NULLPTR;
	next = NULLPTR;
	while (curr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return (prev);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*prev;
	t_list	*curr;
	t_list	*next;
	t_list	*new;

	(void) del;
	curr = ft_reverse_lst(lst);
	new = ft_lstnew(f(curr->content));
	prev = curr;
	curr = curr->next;
	free(prev);
	while (curr)
	{
		next = ft_lstnew(f(curr->content));
		ft_lstadd_front(&new, next);
		new = next;
		prev = curr;
		curr = curr->next;
		free(prev);
	}
	return (new);
}
