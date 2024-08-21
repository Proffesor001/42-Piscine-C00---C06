/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebert <eebert@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 11:12:53 by eebert            #+#    #+#             */
/*   Updated: 2024/08/11 22:44:58 by eebert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line.h"
#include "list_utils.h"
#include "rush01.h"
#include "string.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int		array[SIZE];
	int		**possible_solutions;
	t_line	**result;

	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	possible_solutions = (int **)malloc((25) * sizeof(int *));
	possible_solutions[24] = 0;
	create_combinations(array, possible_solutions, 0, 3);
	result = parse_input(argc, argv);
	if (!result)
	{
		ft_putstr("Error\n");
		return (-1);
	}
	find_solutions(result, possible_solutions);
	if (!solve(result, result + 4, 0, 0))
	{
		ft_putstr("Error\n");
	}
	else
		print_rows(result);
	return (0);
}
