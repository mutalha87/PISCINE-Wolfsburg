/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhasanov <vhasanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:00:56 by vhasanov          #+#    #+#             */
/*   Updated: 2024/09/27 20:57:24 by vhasanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	hex_str(char *str)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i < 10)
		{
			str[i] = '0' + i;
		}
		else
		{
			str[i] = 'a' + i % 10;
		}
		i++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex[16];
	char	first_hex;
	char	second_hex;

	hex_str(hex);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] != 127)
		{
			write(1, &str[i], 1);
		}
		else
		{
			first_hex = hex[(unsigned char)str[i] / 16];
			second_hex = hex[(unsigned char)str[i] % 16];
			write(1, "\\", 1);
			write(1, &first_hex, 1);
			write(1, &second_hex, 1);
		}
		i++;
	}
}

// int	main(void)
// {
// 	char str[] = "Vusal\nHasanov";
// 	ft_putstr_non_printable(str);
// }