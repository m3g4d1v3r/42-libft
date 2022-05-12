/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:29:43 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/25 13:12:59 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	t_uchar	aux_c;

	aux_c = (t_uchar) c;
	while (*s != '\0' && *s != aux_c)
		s++;
	if (*s == aux_c)
		return ((char *) s);
	return (NULLPTR);
}
