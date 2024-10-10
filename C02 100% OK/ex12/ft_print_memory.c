/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhasanov <vhasanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:01:35 by vhasanov          #+#    #+#             */
/*   Updated: 2024/09/27 21:10:55 by vhasanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

char	*ft_new_string(char *dest, char *src, unsigned int start,
		unsigned int end)
{
	int	i;

	i = 0;
	while (start < end && src[start] != '\0')
	{
		dest[i] = src[start];
		start++;
		i++;
	}
	while (start < end)
	{
		dest[i] = '\0';
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	write_address_hex(unsigned long addr, int operation)
{
	char	*hex_table;
	char	address_str[16];
	int		i;

	hex_table = "0123456789abcdef";
	i = 15;
	while (i >= 0 && operation == 1)
	{
		address_str[i] = hex_table[addr % 16];
		addr /= 16;
		i--;
	}
	if (operation == 1)
		write(1, address_str, 16);
	while (addr < 16 && operation == 0)
	{
		write(1, "  ", 2);
		if (addr % 2 == 0)
			write(1, " ", 1);
		addr++;
	}
}

void	str_print(char *str)
{
	unsigned int	i;
	char			*hex_table;
	char			hex_number[2];

	hex_table = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		hex_number[0] = hex_table[str[i] / 16];
		hex_number[1] = hex_table[str[i] % 16];
		write(1, hex_number, 2);
		if (i % 2 != 0)
			write(1, " ", 1);
		i++;
	}
	write_address_hex(i, 0);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] != 127)
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	small_help(int i, char *dest, char *str)
{
	if (i == 0)
	{
		write_address_hex((unsigned long)&str[i], 1);
		write(1, ": ", 2);
		ft_new_string(dest, str, i, i + 16);
		str_print(dest);
		write(1, "\n", 1);
	}
	else if (i % 16 == 0)
	{
		write_address_hex((unsigned long)&str[i], 1);
		write(1, ": ", 2);
		ft_new_string(dest, str, i, i + 16);
		str_print(dest);
		write(1, "\n", 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			*str;
	char			dest[16];
	unsigned int	i;

	str = (char *)addr;
	i = 0;
	while (i < size)
	{
		small_help(i, dest, str);
		i += 16;
	}
	if (i == size && size % 16 != 0)
	{
		write_address_hex((unsigned long)&str[i - i % 16 + 1], 1);
		write(1, ": ", 2);
		ft_new_string(dest, str, (i - i % 16 + 1), (i - i % 16 + 1) + 16);
		str_print(dest);
	}
	return (addr);
}

// int main(){
// 	int size;
// 	void *str = "My name is Vusal, I am from nee &Yuppyty \n point here";
// 	char *str2 = (char *)str;
// 	size =0;
// 	while(str2[size] != '\0'){
// 		size++;
// 	}
// 		ft_print_memory(str, size);
// 		printf("%d", size);
// }