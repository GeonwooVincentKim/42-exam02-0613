/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:42:40 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/17 17:48:15 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	rev(char *str)
{
	int	i;
	int	start;
	int	end;
	int	flag;

	i = 0;
	start = 0;
	end = 0;
	flag = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		while (str[i] == '\0' || str[i] == ' ' || str[i] == '\t')
			i--;
		end = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i--;
		start = i + 1;
		flag = start;
		while (start <= end)
		{
			write(1, &str[start], 1);
			start++;
		}
		if (flag != 0)
			write(1, " ", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev(argv[1]);
	write(1, "\n", 1);
	return (0);
}
