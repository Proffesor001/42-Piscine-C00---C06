/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebert <eebert@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 11:13:04 by eebert            #+#    #+#             */
/*   Updated: 2024/08/11 22:01:25 by eebert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H _
# define SIZE 4
# include "line.h"

void	shift(int list[SIZE], int reverse, int amount);

int		solve(t_line *rows[SIZE], t_line *colums[SIZE], int current_y,
			int increase);

t_line	**parse_input(int argc, char **argv);

#endif