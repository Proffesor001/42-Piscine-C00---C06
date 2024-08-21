/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzefi <anzefi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:36:02 by anzefi            #+#    #+#             */
/*   Updated: 2024/08/19 12:15:38 by anzefi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		i = i * nb;
		power--;
	}
	return (i);
}

// int main (void)
// {
// 	 	int i = 0;
// 	while (i <= 10)
// 	{
// 		printf("%d ---> %d\n",i, ft_iterative_power(3 , i));
// 		i++;
// 	}
// 	return (0);
// }