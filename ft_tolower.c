/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:00:23 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/06 19:24:05 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int	tolower_offset;

	if (c >= 'A' && c <= 'Z')
	{
		tolower_offset = 'a' - 'A';
		return (c + tolower_offset);
	}
	return (c);
}
