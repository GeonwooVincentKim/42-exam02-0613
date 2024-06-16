/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_atoi_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 20:12:25 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/16 20:23:08 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	get_digit(char c, int base)
{
	int	max_v;

	max_v = 0;
	if (base <= 10)
		max_v = base + '0';
	else
		max_v = base - 10 + '0';
	if (c >= '0' && c <= '9' && c <= max_v)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_v)
		return (10 + c - 'a');
	else
		return (-1);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	result;
	int	digit;

	i = 0;
	sign = 1;
	result = 0;
	digit = 0;
	while (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while ((digit = get_digit(to_lower(str[i]), str_base)) >= 0)
	{
		result = result * str_base;
		result = result + (digit * sign);
		++i;
	}
	return (result);
}
