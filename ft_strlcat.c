/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:56:36 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/25 15:47:04 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_strlen;
	size_t	src_strlen;
	size_t	n;

	dst_strlen = ft_strlen(dst);
	src_strlen = ft_strlen(src);
	if (dst_strlen >= dstsize)
		return (dstsize + src_strlen);
	if (src_strlen == 0)
		return (dst_strlen);
	n = dstsize - dst_strlen;
	while (*src != '\0' && --n != 0)
	{
		*(dst + dst_strlen) = *src++;
		dst++;
	}
	*(dst + dst_strlen) = '\0';
	return (dst_strlen + src_strlen);
}
