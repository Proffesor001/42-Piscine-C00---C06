/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzefi <anzefi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:01:14 by anzefi            #+#    #+#             */
/*   Updated: 2024/08/03 11:21:11 by anzefi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	num;

	num = *a;
	*a = *b;
	*b = num;
}
// int main (void)
// {
// 	int num1 = 5;
// 	int num2 = 15;	
// 	printf("before the swap num1 is %d and num2 is %d \n", num1, num2);
// 	ft_swap(&num1, &num2);
// 	printf("before the swap num1 is %d and num2 is %d \n", num1, num2);
// }
