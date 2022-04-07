/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:49:49 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/06 22:08:56 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	t_uchar	*ptr1;
	t_uchar	*ptr2;

	ptr1 = (t_uchar *) s1;
	ptr2 = (t_uchar *) s2;
	while (*ptr1 && *ptr2 && *ptr1 == *ptr2 && n--)
	{
		ptr1++;
		ptr2++;
	}
	if (*ptr1 < *ptr2)
		return (-1);
	else if (*ptr1 > *ptr2)
		return (1);
	return (0);
}
