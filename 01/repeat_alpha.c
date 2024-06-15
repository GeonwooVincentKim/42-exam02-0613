/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 20:27:43 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/16 00:53:16 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_getstr(char c, int i)
{
	while (i > 0)
	{
		write(1, &c, 1);
		--i;
	}
}

void	repeat(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_getstr(str[i], str[i] - 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_getstr(str[i], str[i] - 'A');
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat(argv[1]);
	write(1, "\n", 1);
	return (0);
}
