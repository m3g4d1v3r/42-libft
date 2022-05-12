/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:31:45 by msubtil-          #+#    #+#             */
/*   Updated: 2022/05/11 22:35:49 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	slen;
	size_t	index;

	if (s == NULLPTR)
		return (NULLPTR);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen)
		return (ft_strdup((const char *) s));
	temp = (char *) malloc(sizeof(char) * (len + 1));
	if (temp == NULLPTR)
		return (NULLPTR);
	index = 0;
	while (index < len && (start + index) < slen)
	{
		temp[index] = s[start + index];
		index++;
	}
	temp[index++] = '\0';
	return (temp);
}
