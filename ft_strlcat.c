/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:56:36 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/06 21:18:53 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	byte_offset;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	byte_offset = 0;
	while (byte_offset < (dstsize - dst_len - 1))
	{
		*(dst + dst_len + byte_offset) = *(src + byte_offset);
		byte_offset++;
	}
	*(dst + dst_len + byte_offset) = '\0';
	return (dst_len + src_len);
}
