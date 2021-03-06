/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 23:26:40 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/20 18:46:00 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res_str;
	size_t	size;
	size_t	index;

	size = ft_strlen(s);
	res_str = (char *) malloc(sizeof(char) * (size + 1));
	if (res_str == NULLPTR)
		return (NULLPTR);
	index = 0;
	while (index < size)
	{
		res_str[index] = f((t_uint) index, s[index]);
		index++;
	}
	res_str[index] = '\0';
	return (res_str);
}
