/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 23:08:10 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/15 23:10:03 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	c;

	i = 8;
	while (i--)
	{
		c = c * 2 + (octet & 2);
		octet /= 2;
	}
	return (c);
}
