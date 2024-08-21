/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzefi <anzefi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 09:51:27 by anzefi            #+#    #+#             */
/*   Updated: 2024/08/01 10:32:30 by anzefi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

// int main ()
// {
//     ft_print_alphabet();
// }