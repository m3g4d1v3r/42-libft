/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:31:45 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/12 16:13:04 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	index;

	substr = (char *) malloc(sizeof(char) * len);
	if (substr == (void *) 0)
		return (substr);
	index = 0;
	while (index < len)
	{
		substr[index] = s[start + index];
		index++;
	}
	return (substr);
}
