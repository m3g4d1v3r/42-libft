/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:24:13 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/19 23:22:28 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_int_size(int n)
{
	int	size;

	size = 0;
	while (n >= 1)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_allocate_int_str(int size, short neg)
{
	char	*str;

	if (neg)
	{
		str = (char *) malloc(sizeof(char) * (size + 2));
		str[0] = '-';
		str[size + 1] = '\0';
		return (str);
	}
	str = (char *) malloc(sizeof(char) * (size + 1));
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

void	ft_reverse_str(char *str, int size, short neg)
{
	int	index;

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
	short	neg;
	char	*str;
	int		index;
	int		size;

	neg = 0;
	index = 0;
	if (n < 0)
	{
		neg = 1;
		index = 1;
		n *= -1;
	}
	size = ft_int_size(n);
	str = ft_allocate_int_str(size, neg);
	while (n)
	{
		str[index++] = '0' + (n % 10);
		n /= 10;
	}
	ft_reverse_str(str, size, neg);
	return (str);
}
