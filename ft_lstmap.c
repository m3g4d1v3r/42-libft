/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 22:45:25 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/25 23:53:14 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*curr;
	t_list	*new_list;

	(void) del;
	new_list = NULLPTR;
	curr = lst;
	while (curr)
	{
		ft_lstadd_back(&new_list, ft_lstnew(f(curr->content)));
		curr = curr->next;
	}
	return (new_list);
}
