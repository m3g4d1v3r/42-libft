/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 22:03:13 by msubtil-          #+#    #+#             */
/*   Updated: 2022/05/11 21:52:43 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new_str;
	size_t	str_size;

	str_size = ft_strlen(src);
	new_str = (char *) malloc(sizeof(char) * (str_size + 1));
	if (new_str == NULLPTR)
		return (new_str);
	while (*src != '\0')
		*new_str++ = *src++;
	*new_str = '\0';
	return (new_str - str_size);
}
