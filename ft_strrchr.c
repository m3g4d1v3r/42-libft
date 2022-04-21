/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:29:43 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/20 18:43:11 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*i;

	i = s;
	while (*s != '\0')
		s++;
	while (s > i && *s != c)
		s--;
	if (*s == c)
		return ((char *) s);
	return (NULLPTR);
}
