/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebert <eebert@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:17:40 by eebert            #+#    #+#             */
/*   Updated: 2024/08/11 22:06:53 by eebert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINE_H
# define LINE_H _

typedef struct s_line
{
	int	start;
	int	end;
	int	*solutions[24];
	int	current_solution;
	int	solution_count;
}		t_line;

void	chars_to_lines(int *args, t_line **lines);

void	find_solutions(t_line **lines, int **possible_solutions);

int		is_valid_solution(const int array[4], const t_line *line);

t_line	*create_line(int start, int end);

void	print_rows(t_line **rows);

#endif