/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzefi <anzefi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:10:08 by anzefi            #+#    #+#             */
/*   Updated: 2024/08/15 12:40:08 by anzefi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	res;

	res = 1;
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
// int main (void)
// {
// 	 	int i = 0;
// 	while (i <= 10)
// 	{
// 		printf("%d ---> %d\n",i, ft_fibonacci(i));
// 		i++;
// 	}
// 	return (0);
// }