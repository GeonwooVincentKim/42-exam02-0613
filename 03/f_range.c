/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_range.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 21:58:55 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/16 22:12:31 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdlib.h>

int	*ft_range(int start, int end)
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
			tab[i] = start;
			start++;
			i++;
		}
		else
		{
			tab[i] = start;
			start--;
			i++;
		}
	}
	return (tab);
}
