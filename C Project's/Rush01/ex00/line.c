/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebert <eebert@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:21:31 by eebert            #+#    #+#             */
/*   Updated: 2024/08/11 22:45:15 by eebert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line.h"
#include "rush01.h"
#include <stdlib.h>
#include <unistd.h>

void	chars_to_lines(int *args, t_line **lines)
{
	int		i;
	t_line	*line;

	i = 0;
	while (i < 4)
	{
		line = create_line(args[i], args[i + 4]);
		lines[i] = line;
		i++;
	}
}

void	find_solutions(t_line **lines, int **possible_solutions)
{
	int	line_index;
	int	i;

	line_index = 0;
	while (line_index < 8)
	{
		i = 0;
		while (i < 24)
		{
			if (is_valid_solution(possible_solutions[i], lines[line_index]))
			{
				lines[line_index]->solutions[lines[line_index]
					->solution_count] = possible_solutions[i];
				lines[line_index]->solution_count++;
			}
			i++;
		}
		line_index++;
	}
}

int	is_valid_solution(const int array[SIZE], const t_line *line)
{
	int	max_left;
	int	max_right;
	int	counts[2];
	int	i;

	max_left = 0;
	max_right = 0;
	counts[0] = 0;
	counts[1] = 0;
	i = 0;
	while (i < SIZE)
	{
		if (array[i] > max_left)
		{
			counts[0]++;
			max_left = array[i];
		}
		if (array[SIZE - 1 - i] > max_right)
		{
			counts[1]++;
			max_right = array[SIZE - 1 - i];
		}
		i++;
	}
	return (line->start == counts[0] && line->end == counts[1]);
}

t_line	*create_line(int start, int end)
{
	t_line	*line;

	line = malloc(sizeof(t_line));
	line->start = start;
	line->end = end;
	line->solution_count = 0;
	line->current_solution = 0;
	return (line);
}

void	print_rows(t_line **rows)
{
	int		x;
	int		y;
	char	c;

	y = 0;
	y = 0;
	while (y < SIZE)
	{
		x = 0;
		while (x < SIZE)
		{
			c = rows[x]->solutions[rows[x]->current_solution][y] + '0';
			write(1, &c, 1);
			if (x != SIZE - 1)
			{
				write(1, " ", 1);
			}
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}
