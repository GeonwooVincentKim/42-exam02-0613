/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 00:44:59 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/16 00:50:11 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	i;

	i = 0;
	while (a == 0 || b == 0)
		return (0);
	if (a > b)
		i = a;
	else
		i = b;
	while (1)
	{
		if (i % a == 0 && i % b == 0)
			return (i);
		++i;
	}
}
