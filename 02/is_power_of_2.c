/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:30:10 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/15 22:31:38 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	return ((n & (n - 1)) == 0);
}
