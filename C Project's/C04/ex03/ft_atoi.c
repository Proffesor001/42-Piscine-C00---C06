/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzefi <anzefi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:01:58 by anzefi            #+#    #+#             */
/*   Updated: 2024/08/21 15:15:38 by anzefi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	res;
	int	count;

	res = 0;
	count = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			count++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	if (!(count % 2))
		return (res);
	return (-res);
}

// int main ()
// {
//     char a[] = "    ----+--+1234ab567";
// 	printf("%d\n", ft_atoi(a));
// }