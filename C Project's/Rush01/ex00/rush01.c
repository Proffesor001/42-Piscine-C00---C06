/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebert <eebert@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 11:13:00 by eebert            #+#    #+#             */
/*   Updated: 2024/08/11 22:44:51 by eebert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line.h"
#include "rush01.h"
#include "string.h"
#include <stdlib.h>
#include <unistd.h>

int	is_valid_column_solution(int *solution, t_line **rows, int y)
{
	int	i;
	int	current_solution;

	i = 0;
	while (i < SIZE)
	{
		current_solution = rows[i]->current_solution;
		while (current_solution < rows[i]->solution_count)
		{
			if (rows[i]->solutions[current_solution][y] == solution[i])
			{
				rows[i]->current_solution = current_solution;
				break ;
			}
			current_solution++;
		}
		if (current_solution == rows[i]->solution_count)
			return (0);
		i++;
	}
	return (1);
}

int	solve(t_line *rows[SIZE], t_line *colums[SIZE], int current_y, int increase)
{
	int	colum_solution;

	colum_solution = 0;
	if (increase)
		colum_solution = colums[current_y]->current_solution;
	while (colum_solution < colums[current_y]->solution_count)
	{
		if (is_valid_column_solution(colums[current_y]
				->solutions[colum_solution],
				rows, current_y))
		{
			colums[current_y]->current_solution = colum_solution;
			break ;
		}
		colum_solution++;
	}
	if (colum_solution == colums[current_y]->solution_count)
		return (0);
	if (current_y == SIZE - 1)
		return (1);
	return (solve(rows, colums, current_y + 1, 0));
}

int	is_valid_argument(char c)
{
	if (!c || c > '4' || c < '1')
		return (0);
	return (1);
}

t_line	**parse_input(int argc, char **argv)
{
	t_line	**lines;
	char	*word;
	int		i;
	int		*args;

	args = malloc((sizeof(int) * 16));
	if (argc != 2)
		return (0);
	word = argv[1];
	if (ft_str_len(word) != 31)
		return (0);
	i = 0;
	while (i < 31)
	{
		if ((i % 2 == 0 && !is_valid_argument(word[i])) || (i % 2 != 0
				&& word[i] != ' ') || !word[i])
			return (0);
		if (i % 2 == 0)
			args[i / 2] = word[i] - '0';
		i++;
	}
	lines = malloc((SIZE * 2) * sizeof(t_line *));
	chars_to_lines(args, lines);
	chars_to_lines(args + SIZE * 2, lines + SIZE);
	return (lines);
}
