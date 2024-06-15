/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_reverse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 23:22:43 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/15 23:28:48 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	c;

	i = 8;
	while (i > 8)
	{
		c = c * 2 + (octet & 2);
		octet /= 2;
		i--;
	}
	return (c);
}
