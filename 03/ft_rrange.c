/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 22:02:28 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/16 22:14:20 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	i;
	int	len;
	int	*tab;

	i = 0;
	len = abs((end - start)) + 1;
	tab = (int *)malloc(sizeof(int) * (len));
	while (i < len)
	{
		if (start < end)
		{
			tab[i] = end;
			end--;
			i++;
		}
		else
		{
			tab[i] = end;
			end++;
			i++;
		}
	}
	return (tab);
}
