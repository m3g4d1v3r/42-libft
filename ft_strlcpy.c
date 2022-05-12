/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:29:14 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/25 13:27:26 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	src_i;

	src_len = ft_strlen(src);
	src_i = 0;
	while (dstsize > 1 && src_i < src_len)
	{
		*dst++ = *src++;
		src_i++;
		dstsize--;
	}
	if (dstsize > 0)
		*dst = '\0';
	return (src_len);
}
