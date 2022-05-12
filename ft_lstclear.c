/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:36:03 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/25 23:45:21 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*next;

	if (lst == NULLPTR || *lst == NULLPTR)
		return ;
	curr = *lst;
	while (curr != NULLPTR)
	{
		next = curr->next;
		del(curr->content);
		free(curr);
		curr = next;
	}
	*lst = NULLPTR;
}
