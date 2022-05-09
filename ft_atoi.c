/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msubtil- <msubtil-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:01:16 by msubtil-          #+#    #+#             */
/*   Updated: 2022/04/26 13:39:34 by msubtil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(const char chr)
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

int	ft_issignal(const char chr)
{
	if (chr == '+')
		return (1);
	else if (chr == '-')
		return (1);
	return (0);
}

int	ft_treatsignal(const char *nptr, int *signal)
{
	if (*signal != 0)
		return (0);
	if (*nptr == '+')
		*signal = 1;
	else
		*signal = -1;
	return (1);
}

int	ft_detectoverflow(int acc, const char chr, int signal)
{
	long	max_value;
	int		overflow_value;

	overflow_value = 0;
	if (signal > 0)
	{
		max_value = INT_MAX;
		overflow_value = -1;
	}
	else
	{
		max_value = -1 * (long) INT_MIN;
		overflow_value = 0;
	}
	if (acc > max_value / 10)
		return (overflow_value);
	if (10 * acc > max_value - (chr - '0'))
		return (overflow_value);
	return (1);
}

int	ft_atoi(const char *nptr)
{
	int	acc;
	int	signal;
	int	overflow;

	acc = 0;
	signal = 0;
	while (*nptr != '\0')
	{
		if (ft_isdigit(*nptr))
		{
			if (signal == 0)
				signal = 1;
			overflow = ft_detectoverflow(acc, *nptr, signal);
			if (overflow == 0 || overflow == -1)
				return (overflow);
			acc = 10 * acc + (*nptr - '0');
		}
		else if ((ft_isspace(*nptr) == 0 && ft_issignal(*nptr) == 0) || signal)
			break ;
		else if (ft_issignal(*nptr) == 1 && ft_treatsignal(nptr, &signal) == 0)
			break ;
		nptr++;
	}
	return (signal * acc);
}
