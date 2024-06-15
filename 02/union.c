/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 23:34:02 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/15 23:40:05 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	has_char(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ftu(char *s1, char *s2)
{
	char	str[256] = {0};
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i])
	{
		if (!has_char(str, s1[i]))
		{
			write(1, &s1[i], 1);
			str[k] = s1[i];
			k++;	
		}
		i++;
	}
	while (s2[j])
	{
		if (!has_char(str, s2[j]))
		{
			write(1, &s2[j], 1);
			str[k] = s2[j];
			k++;
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ftu(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
