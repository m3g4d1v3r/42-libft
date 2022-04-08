/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:20:38 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/08 00:05:48 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res_ptr;

	if (nmemb > SIZE_MAX / size)
		return ((void *) 0);
	res_ptr = malloc(nmemb * size);
	ft_memset(res_ptr, '\0', nmemb * size);
	return (res_ptr);
}
