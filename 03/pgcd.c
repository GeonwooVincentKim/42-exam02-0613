/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 00:40:53 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/16 00:44:47 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdlib.h>

void	pgcd(char *s1, char *s2)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 0;
	nbr2 = 0;
	if ((nbr1 = atoi(s1)) > 0 && (nbr2 = atoi(s2)) > 0)
	{
		while (nbr1 != nbr2)
		{
			if (nbr1 > nbr2)
				nbr1 -= nbr2;
			else
				nbr2 -= nbr1;
		}
		printf("%d", nbr1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(argv[1], argv[2]);
	printf("\n");
	return (0);
}
