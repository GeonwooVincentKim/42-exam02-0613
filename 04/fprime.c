/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:08:17 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/17 18:14:13 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdlib.h>

void	fprime(char *str)
{
	int	i;
	int	n;

	i = 1;
	n = atoi(str);
	if (n == 1)
		printf("1");
	while (++i <= n)
	{
		if (n % i == 0)
		{
			printf("%d", i);
			if (n == i)
				break ;
			printf("*");
			n /= i;
			i = 1;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		fprime(argv[1]);
	printf("\n");
	return (0);
}
