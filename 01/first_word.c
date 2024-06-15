/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 20:12:42 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/15 20:15:05 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	first(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while ((str[i] != ' ' && str[i] != '\t') && str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char ** argv)
{
	if (argc == 2)
		first(argv[1]);
	write(1, "\n", 1);
	return (0);
}
