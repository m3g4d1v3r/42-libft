/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:31:45 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/13 22:14:25 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlen_split(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s++ != c)
		len++;
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
	size_t	table_size;

	table_size = ft_get_substrs_nb(s, c) + 1;
	table = (char **) malloc(sizeof(char *) * table_size);
	ft_fill_table(table, --s, c);
	table[table_size - 1] = (void *) 0;
	return (table);
}
