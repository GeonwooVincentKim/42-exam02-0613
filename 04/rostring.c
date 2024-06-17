/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:49:20 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/17 17:58:25 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	write_word(char *start, char *end)
{
	while (start < end)
	{
		write(1, start, 1);
		start++;
	}
}

int	main(int argc, char **argv)
{
	char	*str;
	char	*start;
	char	*end;
	int		i;

	i = 0;
	if (argc > 1)
	{
		str = argv[1];
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		start = &str[i];
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		end = &str[i];
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i])
		{
			while (str[i])
			{
				if (str[i] == ' ' || str[i] == '\t')
				{
					while (str[i] == ' ' || str[i] == '\t')
						i++;
					if (str[i])
						write(1, " ", 1);
				}
				else
				{
					write(1, &str[i], 1);
					i++;
				}
			}
		}
		write_word(start, end);
	}
	write(1, "\n", 1);
	return (0);
}
