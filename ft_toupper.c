/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:00:23 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/05 22:02:52 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	toupper_offset;

	if (c >= 'a' && c <= 'z')
	{
		toupper_offset = 'A' - 'a';
		return (c + toupper_offset);
	}
	return (c);
}
