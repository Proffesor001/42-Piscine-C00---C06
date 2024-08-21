/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzefi <anzefi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:16:04 by anzefi            #+#    #+#             */
/*   Updated: 2024/08/14 10:29:45 by anzefi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)

{
	int	res;

	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb > 1)
	{
		res = nb * ft_recursive_factorial(nb - 1);
	}
	return (res);
}

// int main (void)
// {
// 	 	int i = 0;
// 	while (i <= 10)
// 	{
// 		printf("%d ---> %d\n",i, ft_recursive_factorial(i));
// 		i++;
// 	}
// 	return (0);
// }