/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:24:13 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/26 00:04:08 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_int_size(long n)
{
	size_t	size;

	size = 0;
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_allocate_int_str(size_t size, short neg)
{
	char	*str;

	if (neg)
	{
		str = (char *) malloc(sizeof(char) * (size + 2));
		str[0] = '-';
		str[1] = '0';
		str[size + 1] = '\0';
		return (str + 1);
	}
	str = (char *) malloc(sizeof(char) * (size + 1));
	str[0] = '0';
	str[size] = '\0';
	return (str);
}

void	ft_swap_chr(char *p1, char *p2)
{
	char	tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void	ft_reverse_str(char *str, size_t size, short neg)
{
	size_t	index;

	index = 0;
	while (index < (size / 2))
	{
		if (neg)
			ft_swap_chr(&str[index + 1], &str[size - index]);
		else
			ft_swap_chr(&str[index], &str[size - index - 1]);
		index++;
	}
}

char	*ft_itoa(int n)
{
	long	aux_n;
	char	*str;
	size_t	size;

	aux_n = n;
	if (n < 0)
		aux_n *= -1;
	size = ft_int_size(aux_n);
	str = ft_allocate_int_str(size, n < 0);
	while (aux_n >= 1)
	{
		*str = '0' + (aux_n % 10);
		aux_n /= 10.0;
		str++;
	}
	if (n != 0 && n < 0)
		str -= (size + 1);
	else if (n != 0)
		str -= size;
	ft_reverse_str(str, size, n < 0);
	return (str);
}
