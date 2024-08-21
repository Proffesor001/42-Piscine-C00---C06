/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzefi <anzefi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:05:15 by anzefi            #+#    #+#             */
/*   Updated: 2024/08/03 15:39:21 by anzefi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int	*b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}
// int main (void)
// {
// 	int a = 20;
// 	int b = 4;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("the div is %d and the mod is %d", a, b);
// }
