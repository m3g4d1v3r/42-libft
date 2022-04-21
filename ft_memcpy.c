/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:49:30 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/05 19:51:04 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	byte_offset;
	t_uchar	*aux_dest;
	t_uchar	*aux_src;

	byte_offset = 0;
	aux_src = (t_uchar *) src;
	aux_dest = (t_uchar *) dest;
	while (byte_offset < n)
	{
		*(aux_dest + byte_offset) = *(aux_src + byte_offset);
		byte_offset++;
	}
	return (dest);
}
