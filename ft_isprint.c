/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:54:00 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/05 00:01:09 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isprint(int c)
{
	if (c >= FT_CONTROL_LOWER && c <= FT_CONTROL_UPPER)
		return (0);
	if (c == FT_DELETE)
		return (0);
	return (1);
}
