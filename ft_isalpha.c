/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:24:41 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/04 21:56:45 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (FT_TRUE);
	return (FT_FALSE);
}

int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (FT_TRUE);
	return (FT_FALSE);
}

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}