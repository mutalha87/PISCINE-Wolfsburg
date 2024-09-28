/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:10:42 by mutalha           #+#    #+#             */
/*   Updated: 2024/09/28 13:36:11 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
// void ft_printr(int a)
// {
// 		if (a == 0)
// 	{
// 		printf("The strings are equal.\n\n");
// 	}
// 	else if (a < 0)
// 	{
// 		printf("The first string is less than the second string.\n\n");
// 	}
// 	else
// 	{
// 		printf("The first string is greater than the second string.\n\n");
// 	}
// }

// int	main(void)
// {
// 	char	str1[] = "Hello to the world of 42 Wolfsburg";
// 	char	str2[] = "Hello How is going your piscine?";
// 	char	str3[] = "Hello to the world of 42 Wolfsburg";
// 	int		r;
// 	unsigned int	n = 10;
// 	printf("Comapring till : %d \n String 1 = %s \n and" ,n ,str1);
// 	printf("\n String 2 = %s \n\n", str2);
// 	r = ft_strncmp(str1, str2 , n);
// 	ft_printr(r);
// 	printf("Comapring till : %d \n String 1 = %s \n and" ,n ,str1);
// 	printf("\n String 2 = %s \n\n", str3);
// 	r = ft_strncmp(str1, str3, n);
// 	ft_printr(r);
// 	printf("Comapring till : %d\n String 1 = %s \n and" ,n ,str2);
// 	printf("\n String 2 = %s \n\n", str1);
// 	r = ft_strncmp(str2, str1, n);
// 	ft_printr(r);
// 	return (0);
// }