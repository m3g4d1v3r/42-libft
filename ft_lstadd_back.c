/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:12:33 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/25 23:40:45 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (lst == NULLPTR || new == NULLPTR)
		return ;
	if (*lst == NULLPTR)
	{
		*lst = new;
		return ;
	}
	curr = *lst;
	while (curr->next != NULLPTR)
		curr = curr->next;
	curr->next = new;
}
