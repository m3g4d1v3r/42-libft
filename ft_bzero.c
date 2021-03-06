/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:01:47 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/05 19:51:25 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	byte_offset;

	byte_offset = 0;
	while (byte_offset < n)
	{
		*((t_uchar *)(s + byte_offset)) = '\0';
		byte_offset++;
	}
}
