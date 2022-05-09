/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 23:54:45 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/26 13:27:21 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_base_ten_nbr(long n)
{
	int	base;

	base = 1;
	while (n >= 10)
	{
		n /= 10;
		base *= 10;
	}
	return (base);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	aux_nb;
	int		nbr_base;
	char	chr_to_write;

	aux_nb = (long) n;
	if (n < 0)
	{
		aux_nb *= -1;
		write(fd, "-1", 1);
	}
	nbr_base = ft_base_ten_nbr(aux_nb);
	while (nbr_base)
	{
		chr_to_write = (aux_nb / nbr_base) % 10 + '0';
		write(fd, &chr_to_write, 1);
		nbr_base /= 10;
	}
}
