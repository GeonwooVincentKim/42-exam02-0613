/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:49:27 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/17 17:04:38 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdlib.h>

char	*ft_itoa(int nbr)
{
	int		n;
	int		len;
	char	*res;

	n = nbr;
	len = 0;
	if (nbr == -2147483648)
		return ("-2147483648\0");
	if (nbr <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	*res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nbr == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (n)
	{
		res[--len] = nbr % 10 + '0';
		nbr /= 10;	
	}
	return (res);
}
