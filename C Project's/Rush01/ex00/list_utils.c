/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebert <eebert@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 11:12:40 by eebert            #+#    #+#             */
/*   Updated: 2024/08/11 22:45:04 by eebert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <stdlib.h>

void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

int	*create_list(void)
{
	int	*list;

	list = (int *)malloc((SIZE + 1) * sizeof(int));
	list[SIZE] = 0;
	return (list);
}

void	copy_array(int *dest, int *src)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		dest[i] = src[i];
		i++;
	}
}

void	create_combinations(int *array, int **solutions, int start, int end)
{
	int			*new_list;
	static int	i;
	int			i2;

	if (start == 0)
		i = 0;
	if (start == end)
	{
		new_list = create_list();
		solutions[i] = new_list;
		copy_array(new_list, array);
		i++;
	}
	i2 = start;
	while (i2 <= end)
	{
		swap(array + start, array + i2);
		create_combinations(array, solutions, start + 1, end);
		swap(array + start, array + i2);
		i2++;
	}
}
