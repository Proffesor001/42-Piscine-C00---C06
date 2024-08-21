/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzefi <anzefi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:15:54 by anzefi            #+#    #+#             */
/*   Updated: 2024/08/15 11:02:15 by anzefi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		res = res * nb;
		--nb;
	}
	return (res);
}

// int	main ()
// {
// 	int i = 0;

// 	while (i <= 10)
// 	{
// 		printf("%d ---> %d\n",i, ft_iterative_factorial(i));
// 		i++;
// 	}
// 	return (0);
// }
