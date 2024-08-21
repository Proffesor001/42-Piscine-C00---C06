/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzefi <anzefi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:56:47 by anzefi            #+#    #+#             */
/*   Updated: 2024/08/03 12:39:12 by anzefi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = a % b;
	*div = a / b;
}

// int main (void)
// {
// 	int a = 20;
// 	int b = 4;
// 	int div ;
// 	int mod ;

// 	ft_div_mod(a,b,&div,&mod);
// 	printf("the mod is %d, the div is %d", mod,div);
// }
