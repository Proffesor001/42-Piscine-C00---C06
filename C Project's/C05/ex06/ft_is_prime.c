/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzefi <anzefi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:02:46 by anzefi            #+#    #+#             */
/*   Updated: 2024/08/21 11:00:42 by anzefi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

// int main ()
// {
// 	int num = 30;

// 	if (ft_is_prime(num))
// 	printf("%d is a prime number \n", num );
// 	else
// 	printf("%d is not a prime number \n", num );
// }