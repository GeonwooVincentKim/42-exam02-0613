/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 23:58:45 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/16 00:12:15 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	wdmatch(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s2[i])
	{
		if (s1[j] == s2[i])
			j++;
		i++;
	}
	return (s1[j] == '\0');
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (wdmatch(argv[1], argv[2]))
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
