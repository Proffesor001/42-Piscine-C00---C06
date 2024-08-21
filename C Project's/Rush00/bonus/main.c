/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybulatov <ybulatov@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 21:05:39 by ybulatov          #+#    #+#             */
/*   Updated: 2024/08/04 19:53:21 by ybulatov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int x, int y);

int	ft_check_variables(char *arg1, char *arg2, int *x, int *y)
{
	int	i;

	i = 0;
	*x = 0;
	*y = 0;
	while (arg1[i] != '\0')
	{
		if (arg1[i] < '0' || arg1[i] > '9')
			return (0);
		*x = *x * 10 + (arg1[i] - '0');
		i++;
	}
	i = 0;
	while (arg2[i] != '\0')
	{
		if (arg2[i] < '0' || arg2[i] > '9')
			return (0);
		*y = *y * 10 + (arg2[i] - '0');
		i++;
	}
	if (*x > 2147483647 || *y > 2147483647)
		return (0);
	return (1);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (argc == 3)
	{
		if (ft_check_variables(argv[1], argv[2], &x, &y))
		{
			rush(x, y);
		}
		else
		{
			write(1, "Error: Arguments must be positive whole numbers.\n", 49);
		}
	}
	else
	{
		write(1, "Error: There should be exactly 2 arguments.\n", 44);
	}
	return (0);
}
