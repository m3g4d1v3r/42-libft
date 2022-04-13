/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:31:45 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/12 22:14:36 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

short	ft_chrcmpset(char const chr, char const *set)
{
	while (*set)
	{
		if (chr == *set)
			return (1);
		set++;
	}
	return (0);
}

int	ft_low_offset(char const *s1, char const *set, size_t len)
{
	int	low_index;

	low_index = 0;
	while (ft_chrcmpset(s1[low_index], set) && (size_t) low_index < len)
		low_index++;
	return (low_index);
}

int	ft_high_offset(char const *s1, char const *set, size_t len)
{
	int	high_index;

	high_index = len - 1;
	while (ft_chrcmpset(s1[high_index], set) && (size_t) high_index >= 0)
		high_index--;
	return (high_index);
}

char	*ft_fill(char const *s1, int offset, size_t len)
{
	char	*res;
	size_t	index;

	res = (char *) malloc(sizeof(char) * len);
	if (res == (void *) 0)
		return (res);
	index = 0;
	while (index < len)
	{
		res[index] = s1[offset + index];
		index++;
	}
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	low_index;
	size_t	high_index;

	len = ft_strlen(s1);
	low_index = ft_low_offset(s1, set, len);
	high_index = ft_high_offset(s1, set, len);
	return (ft_fill(s1, low_index, (high_index - low_index + 1)));
}
