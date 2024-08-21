/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybulatov <ybulatov@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:19:11 by ybulatov          #+#    #+#             */
/*   Updated: 2024/08/03 14:43:44 by ybulatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

// Function to handle the special case where x == 1
void	ft_handle_special_case_x(int y)
{
	int	height;

	height = 1;
	while (height <= y)
	{
		if (height == 1)
			ft_putchar('A');
		else if (height == y)
			ft_putchar('C');
		else
			ft_putchar('B');
		write(1, "\n", 1);
		height++;
	}
}

// Function to handle the special case where y == 1
void	ft_handle_special_case_y(int x)
{
	int	length;

	length = 1;
	while (length <= x)
	{
		if (length == 1)
			ft_putchar('A');
		else if (length == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		length++;
	}
	write(1, "\n", 1);
}

// Function to handle the general case
void	ft_handle_general_case(int x, int y)
{
	int	height;
	int	length;

	height = 1;
	while (height <= y)
	{
		length = 1;
		while (length <= x)
		{
			if ((height == 1 && length == 1)
				|| (height == y && length == x))
				ft_putchar('A');
			else if ((height == 1 && length == x)
				|| (height == y && length == 1))
				ft_putchar('C');
			else if (height == 1 || height == y || length == 1 || length == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			length++;
		}
		write(1, "\n", 1);
		height++;
	}
}

// Main rush function that calls the appropriate case handling function
void	rush(int x, int y)
{
	if (x == 1)
		ft_handle_special_case_x(y);
	else if (y == 1)
		ft_handle_special_case_y(x);
	else
		ft_handle_general_case(x, y);
}
