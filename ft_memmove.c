/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:58:29 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/05 19:48:31 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_move_desc(void *dest, const void *src, size_t n)
{
	size_t	byte_offset;
	t_uchar	*aux_dest;
	t_uchar	*aux_src;

	byte_offset = n - 1;
	aux_src = (t_uchar *) src;
	aux_dest = (t_uchar *) dest;
	while (byte_offset != 0)
	{
		*(aux_dest + byte_offset) = *(aux_src + byte_offset);
		byte_offset--;
	}
	*(aux_dest) = *(aux_src);
	return (dest);
}

void	*ft_move_asc(void *dest, const void *src, size_t n)
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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src == dest)
		return (dest);
	else if (src < dest && (src + n) > dest)
		return (ft_move_desc(dest, src, n));
	return (ft_move_asc(dest, src, n));
}
