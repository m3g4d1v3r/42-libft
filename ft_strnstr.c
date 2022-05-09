/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:13:36 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/25 17:54:48 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define BASE 0x10
#define BASE_SHIFTER 4

size_t	ft_bin_base_msb(size_t base_shifter, size_t exp)
{
	return (1 << (base_shifter * (exp)));
}

size_t	ft_hash(const char *str, size_t str_len)
{
	size_t	hash;
	size_t	i;

	hash = 0;
	i = 0;
	while (i < str_len)
	{
		hash = hash * 0x10 + *str++;
		i++;
	}
	return (hash);
}

size_t	ft_rolling_hash(char newc, char oldc, size_t pow, size_t lhash)
{
	return (0x10 * (lhash - (oldc * pow)) + newc);
}

short	ft_check_if_matches(const char *str1, const char *str2, size_t len)
{
	while (len--)
	{
		if (*str1 != *str2)
			return (0);
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b_hash;
	size_t	l_len;
	size_t	l_hash;
	size_t	pow;

	l_len = ft_strlen(little);
	if (l_len == 0)
		return ((char *) big);
	if (ft_strlen(big) < l_len || len <= 0)
		return (NULLPTR);
	b_hash = ft_hash(big, l_len);
	l_hash = ft_hash(little, l_len);
	pow = ft_bin_base_msb(BASE_SHIFTER, (l_len - 1));
	len -= (l_len - 1);
	while (*(big + l_len - 1) != '\0' && len)
	{
		if (b_hash == l_hash)
			if (ft_check_if_matches(big, little, l_len))
				return ((char *) big);
		b_hash = ft_rolling_hash(*(big + l_len), *(big), pow, b_hash);
		big++;
		len--;
	}
	return (NULLPTR);
}
