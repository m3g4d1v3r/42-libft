/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 23:26:40 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/25 23:07:14 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_striteri(char const *s, void (*f)(unsigned int, char*))
{
	size_t	size;
	size_t	index;

	size = ft_strlen(s);
	index = 0;
	while (index < size)
	{
		f((t_uint) index, (char *) &s[index]);
		index++;
	}
}
