/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:08:21 by mutalha           #+#    #+#             */
/*   Updated: 2024/09/30 14:11:32 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_recursive(long nbr, char *base, int base_len)
{
	if (nbr >= base_len)
	{
		ft_putnbr_recursive(nbr / base_len, base, base_len);
	}
	ft_putchar(base[nbr % base_len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	lnbr;

	base_len = 0;
	lnbr = nbr;
	if (!is_valid_base(base))
		return ;
	while (base[base_len])
		base_len++;
	if (lnbr < 0)
	{
		ft_putchar('-');
		lnbr = -lnbr;
	}
	ft_putnbr_recursive (lnbr, base, base_len);
}

// int	main(void)
// {
// 	ft_putnbr_base(255, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(255, "0123456789ABCDEF");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(255, "01234567");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-255, "0123456789");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(255, "poneyvif");
// 	write(1, "\n", 1);
// 	return (0);
// }
