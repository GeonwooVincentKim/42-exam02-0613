/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 00:24:49 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/16 00:28:32 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	paramsum(int i)
{
	char	c;

	if (i > 9)
		paramsum(i / 10);
	c = (i % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	(void) argv;
	paramsum(argc - 1);
	write(1, "\n", 1);
	return (0);
}
