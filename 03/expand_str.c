/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:14:33 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/16 18:51:42 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	expa(char* str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			flag = 1;
		else
		{
			if (flag)
				write(1, "   ", 3);
			flag = 0;
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		expa(argv[1]);
	write(1, "\n", 1);
	return (0);
}
