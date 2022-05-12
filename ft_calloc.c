/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:20:38 by msubtil-          #+#    #+#             */
/*   Updated: 2022/05/09 20:36:04 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res_ptr;

	if (size == 0 || nmemb == 0)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (NULLPTR);
	res_ptr = malloc(nmemb * size);
	if (res_ptr == NULLPTR)
		return (NULLPTR);
	ft_memset(res_ptr, '\0', nmemb * size);
	return (res_ptr);
}
