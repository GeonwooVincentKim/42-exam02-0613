/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 22:21:39 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/15 22:23:56 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;
	int	j;
	int	match;

	i = 0;
	j = 0;
	match = 1;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break ;
			}
			j++;
		}
		if (!match)
			return (i);
		i++;
	}
	return (i);
}
