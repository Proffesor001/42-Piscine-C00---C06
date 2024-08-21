/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzefi <anzefi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:24:23 by anzefi            #+#    #+#             */
/*   Updated: 2024/08/15 12:03:18 by anzefi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 0;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power > 0)
	{
		res = (ft_recursive_power(nb, power - 1) * nb);
	}
	return (res);
}

// int main (void)
// {
// 	 	int i = 0;
// 	while (i <= 10)
// 	{
// 		printf("%d ---> %d\n",i, ft_recursive_power(3 , i));
// 		i++;
// 	}
// 	return (0);
// }