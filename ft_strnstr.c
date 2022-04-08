/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:13:36 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/07 21:58:35 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_len;
	size_t	acc;

	l_len = ft_strlen(little);
	acc = 0;
	while (*big != '\0' && len--)
	{
		if (*big == *little)
		{
			acc++;
			little++;
		}
		else if (!(acc == 1 && (*big == *(little - 1))) && acc > 0)
		{
			little -= acc;
			acc = 0;
		}
		big++;
		if (acc == l_len)
			return ((char *)(big - l_len));
	}
	return ((char *) 0);
}
