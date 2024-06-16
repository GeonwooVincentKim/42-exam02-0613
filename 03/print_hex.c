/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 23:12:38 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/16 23:19:54 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}

void	prh(int i)
{
	char	c[] = "0123456789abcdef";

	if (i >= 16)
		prh(i / 16);
	write(1, &c[i % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		prh(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
