/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzefi <anzefi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 09:08:23 by anzefi            #+#    #+#             */
/*   Updated: 2024/08/07 10:45:38 by anzefi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
			i++;
		else
			return (0);
	}
	return (1);
}

// int main(void)
// {
// 	char	str[] = "as32fSD";
// 	char 	str1[] = "\n\t";
// 	char	str2[] = "";

// 	printf("%d\n", ft_str_is_printable(str));
// 	printf("%d\n", ft_str_is_printable(str1));
// 	printf("%d\n", ft_str_is_printable(str2));
// }