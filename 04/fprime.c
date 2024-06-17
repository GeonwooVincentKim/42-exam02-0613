/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:31:33 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/17 16:41:22 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdlib.h>

void	fprime(char *str)
{
	int	i;
	int	value;

	i = 1;
	value = atoi(str);
	if (value == 1)
		printf("1");
	while (value >= ++i)
	{
		if (value % i == 0)
		{
			printf("%d", i);
			if (value == i)
				break ;
			printf("*");
			value /= i;
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
