/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 22:56:34 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/16 23:11:57 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdlib.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		if ((i = atoi(argv[1])) > 0 && (j = atoi(argv[2])))
		{
			while (i != j)
			{
				if (i > j)
					i -= j;
				else
					j -= i;
			}
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
