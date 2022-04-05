/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:29:14 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/05 20:47:35 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	byte_offset;

	if (dstsize == 0)
		return (0);
	byte_offset = 0;
	while (byte_offset < (dstsize - 1))
	{
		*(dst + byte_offset) = *(src + byte_offset);
		byte_offset++;
	}
	*(dst + byte_offset) = '\0';
	return (byte_offset);
}
