/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:03:09 by mutalha           #+#    #+#             */
/*   Updated: 2024/09/30 17:19:45 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_is_ws(char ch)
{
	int		i;
	char	*ws;

	ws = "\f\n\r\t\v ";
	i = 0;
	while (i < 6)
	{
		if (ch == ws[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_atoi(char	*str)
{
	int	n;
	int	nb;

	n = 0;
	while (ft_is_ws(*str) == 1)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			n++;
		str++;
	}
	nb = 0;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	if ((n % 2) == 1)
		return (-nb);
	else
		return (nb);
}

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

void	ft_putnbr_recursive(long nbr, char *base, int base_len)
{
	if (nbr >= base_len)
	{
		ft_putnbr_recursive(nbr / base_len, base, base_len);
	}
	write(1, &(base[nbr % base_len]), 1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		base_len;
	long	lnbr;

	base_len = 0;
	lnbr = ft_atoi(str);
	if (!is_valid_base(base))
		return (0);
	while (base[base_len])
		base_len++;
	if (lnbr < 0)
	{
		write(1, "-", 1);
		lnbr = -lnbr;
	}
	ft_putnbr_recursive (lnbr, base, base_len);
	return (0);
}

// int	main(void)
// {
// 	ft_atoi_base("\n\v\t--+++255asd12", "01");
// 	write(1, "\n", 1);
// 	ft_atoi_base("\n\t\v--+-255sdf234", "0123456789ABCDEF");
// 	write(1, "\n", 1);
// 	ft_atoi_base("\t\f\v-++-255sd345", "01234567");
// 	write(1, "\n", 1);
// 	ft_atoi_base("\t\v\f\n -+--255wer34", "0123456789");
// 	write(1, "\n", 1);
// 	ft_atoi_base("\t \n \v -+-255ert7 ", "poneyvif");
// 	write(1, "\n", 1);
// 	return (0);
// }
