/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:31:45 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/26 13:04:15 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace_split(const char chr)
{
	if (chr == ' ')
		return (1);
	else if (chr == '\t')
		return (1);
	else if (chr == '\n')
		return (1);
	else if (chr == '\v')
		return (1);
	else if (chr == '\f')
		return (1);
	else if (chr == '\r')
		return (1);
	return (0);
}

size_t	ft_strlen_split(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

size_t	ft_get_substrs_nb(char const *s, char c)
{
	size_t	substrs_nb;
	short	word_state;

	substrs_nb = 0;
	word_state = 0;
	while (*s)
	{
		if (word_state == 0)
		{
			if (*s != c)
			{
				word_state = 1;
				substrs_nb++;
			}
		}
		else
			if (*s == c)
				word_state = 0;
		s++;
	}
	return (substrs_nb);
}

void	ft_fill_table(char **dst, char const *s, char c)
{
	short	word_state;
	size_t	str_index;

	word_state = 0;
	str_index = 0;
	while (*++s)
	{
		if (word_state == 0 && *s != c)
		{
			word_state = 1;
			*dst = malloc(sizeof(char) * (ft_strlen_split(s, c) + 1));
			(*dst)[str_index++] = *s;
		}
		else if (word_state == 1 && *s == c)
		{
			word_state = 0;
			(*dst)[str_index++] = '\0';
			str_index = 0;
			dst++;
		}
		else if (word_state == 1 && *s != c)
			(*dst)[str_index++] = *s;
	}
	if (word_state == 1)
		(*dst)[str_index++] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**table;
	char	delimiter_set[1];
	size_t	substrings_nb;

	if (s == NULLPTR)
		return ((char **) NULLPTR);
	substrings_nb = ft_get_substrs_nb(s, c);
	table = (char **) malloc(sizeof(char *) * (substrings_nb + 1));
	if (table == NULLPTR)
		return ((char **) NULLPTR);
	if (substrings_nb > 1)
		ft_fill_table(table, --s, c);
	else if (substrings_nb == 1)
	{
		delimiter_set[0] = c;
		table[0] = ft_strtrim((char *) s, delimiter_set);
	}
	table[substrings_nb] = NULLPTR;
	return (table);
}
