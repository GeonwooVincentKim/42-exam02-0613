/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_a_prime.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 20:06:04 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/16 20:16:16 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_atoi(char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (str[i])
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}

int	ft_prime(int n)
{
	int	i;

	i = 2;
	if (n <= 1)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnum(int n)
{
	char	c;

	if (n > 9)
		ft_putnum(n / 10);
	c = (n % 10) + '0';
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
			if (ft_prime(nbr))
				sum += nbr;
			nbr--;
		}
		ft_putnum(sum);
	}
	write(1, "\n", 1);
	return (0);
}
