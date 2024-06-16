/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:52:19 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/16 19:00:21 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

char	get_digit(char c, int base)
{
	int	i;

	i = 0;
	if (base <= 10)
		i = base + '0';
	else
		i = base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= i)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= i)
		return (10 + c - 'a');
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	res;
	int	digit;

	i = 0;
	sign = 1;
	res = 0;
	digit = 0;
	while (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while ((digit = get_digit(to_lower(str[i]), str_base)) >= 0)
	{
		res = res * str_base;
		res = res + (sign * digit);
		++i;
	}
	return (res);
}
