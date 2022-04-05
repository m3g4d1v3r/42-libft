/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:01:47 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/05 12:21:17 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	byte_offset;

	byte_offset = 0;
	while (byte_offset < n)
	{
		*((unsigned char *)(s + byte_offset)) = (unsigned char) c;
		byte_offset++;
	}
	return (s);
}
