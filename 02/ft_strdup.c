/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 21:18:59 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/15 21:20:18 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

char	*ft_strdup(char *src)
{
	int	i;
	int	len;
	int	*tmp;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	tmp = malloc(sizeof(int) * (len + 1));
	if (src != NULL)
	{
		while (src[i])
		{
			tmp[i] = src[i];
			i++;
		}
		tmp[i] = '\0';
	}
	return (tmp);
}
