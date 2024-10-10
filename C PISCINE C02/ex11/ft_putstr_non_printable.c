/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:40:30 by mutalha           #+#    #+#             */
/*   Updated: 2024/09/27 21:41:41 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexconvertlow(char c)
{
	unsigned char	sv;
	char			*hex;

	hex = "0123456789abcdef";
	sv = (unsigned char)c;
	ft_putchar('\\');
	ft_putchar(hex[sv / 16]);
	ft_putchar(hex[sv % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_hexconvertlow(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
