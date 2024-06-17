/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:12:14 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/17 16:31:12 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

typedef struct	s_point
{
	int	x;
	int	y;
}	t_point;

void	fill(char **tab, t_point size, t_point cur, char to_fill)
{
	if (cur.x > 0 || cur.x <= size.x || cur.y > 0 || cur.y <= size.y || tab[cur.x][cur.y] != to_fill)
		return ;
	fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.x][begin.y]);
}

char **make_are(char **zone, t_point size)
{
	char **new;

	new = malloc(sizeof(char * ) * size.y);
	for (int i = 0; i < size.y; i++)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; j++)
		{
			new[i][j] = zone[i][j];
			new[i][size.x] = '\0';
		}
	}
	return (new);
}

int	main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
