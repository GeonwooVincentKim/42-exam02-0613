/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:59:33 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/16 21:58:18 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_atoi(char *str)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (str[i])
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

int	is_prime(int k)
{
	int	i;
	int	res;

	i = 2;
	res = 0;
	if (i <= 1)
		return (0);
	while (i * i <= k)
	{
		if (k % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnum(int i)
{
	char	c;

	if (i > 9)
		ft_putnum(i / 10);
	c = (i % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	nbr;
	int	sum;

	nbr = 0;
	sum = 0;
	if (argc != 2)
		ft_putnum(0);
	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		while (nbr > 0)
		{
			if (is_prime(nbr))
				sum += nbr;
			nbr--;
		}
		ft_putnum(nbr);
	}
	write(1, "\n", 1);
}
