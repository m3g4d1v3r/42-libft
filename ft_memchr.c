/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:49:49 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/26 11:16:51 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (n == 0)
		return (NULLPTR);
	while (*((t_uchar *) s) != (t_uchar) c && n != 0)
	{
		s++;
		n--;
	}
	if (*((t_uchar *) s) == (t_uchar) c)
		return ((void *) s);
	return (NULLPTR);
}
