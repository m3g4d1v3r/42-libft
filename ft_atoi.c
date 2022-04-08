/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:01:16 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/07 22:50:38 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *nptr)
{
	int	acc;
	int	new_value;

	acc = 0;
	while (*nptr != '\0')
	{
		if (ft_isdigit(*nptr))
		{
			new_value = 10 * acc + (*nptr - '0');
			if (new_value <= acc)
				return (-1);
			acc = new_value;
		}
		else if (*nptr != ' ')
			return (0);
		nptr++;
	}
	return (acc);
}
