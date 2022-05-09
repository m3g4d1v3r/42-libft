/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:36:13 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/25 23:30:11 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lstnew;

	lstnew = (t_list *) malloc(sizeof(t_list));
	if (lstnew == NULLPTR)
		return (NULLPTR);
	lstnew->content = content;
	lstnew->next = NULLPTR;
	return (lstnew);
}
