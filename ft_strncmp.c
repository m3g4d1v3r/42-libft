/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 20:09:00 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/26 14:45:53 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	t_uchar	*ptr1;
	t_uchar	*ptr2;

	ptr1 = (t_uchar *) s1;
	ptr2 = (t_uchar *) s2;
	while (*ptr1 && *ptr2 && *ptr1 == *ptr2 && n)
	{
		ptr1++;
		ptr2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*ptr1 - *ptr2);
}
