/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:01:16 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/07 23:48:01 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *nptr)
{
	int	acc;

	acc = 0;
	while (*nptr != '\0')
	{
		if (ft_isdigit(*nptr))
		{
			if (acc > INT_MAX / 10)
				return (-1);
			if (10 * acc > INT_MAX - (*nptr - '0'))
				return (-1);
			acc = 10 * acc + (*nptr - '0');
		}
		else if (*nptr != ' ')
			return (0);
		nptr++;
	}
	return (acc);
}
