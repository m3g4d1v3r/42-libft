/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:31:45 by msubtil-          #+#    #+#             */
/*   Updated: 2022/05/11 23:30:25 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	slen;

	if (s == NULLPTR)
		return (NULLPTR);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	else if (len > (slen - start))
		len = slen - start;
	tmp = (char *) malloc(sizeof(char) * (len + 1));
	if (tmp == NULLPTR)
		return (NULLPTR);
	ft_strlcpy(tmp, s + start, len + 1);
	return (tmp);
}
