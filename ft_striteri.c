/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 23:26:40 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/19 23:47:29 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_striteri(char const *s, char (*f)(unsigned int, char*))
{
	char	*res_str;
	size_t	size;
	size_t	index;

	size = ft_strlen(s);
	res_str = (char *) malloc(sizeof(char) * (size + 1));
	if (res_str == (void *) 0)
		return ((char *) 0);
	index = 0;
	while (index < size)
	{
		res_str[index] = f((t_uint) index, (char *) &s[index]);
		index++;
	}
	res_str[index] = '\0';
	return (res_str);
}
