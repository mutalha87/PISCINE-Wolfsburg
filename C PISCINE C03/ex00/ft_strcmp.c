/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:10:34 by mutalha           #+#    #+#             */
/*   Updated: 2024/09/27 22:17:54 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		if (s1[i] > s2[i])
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
// 	char	str2[] = "How is going your piscine?";
// 	char	str3[] = "Hello to the world of 42 Wolfsburg";
// 	int		r;
// 	printf("Comapring :\n String 1 = %s \n and" , str1);
// 	printf("\n String 2 = %s \n\n", str2);
// 	r = ft_strcmp(str1, str2);
// 	ft_printr(r);
// 	printf("Comapring :\n String 1 = %s \n and" , str1);
// 	printf("\n String 2 = %s \n\n", str3);
// 	r = ft_strcmp(str1, str3);
// 	ft_printr(r);
// 	printf("Comapring :\n String 1 = %s \n and" , str2);
// 	printf("\n String 2 = %s \n\n", str1);
// 	r = ft_strcmp(str2, str1);
// 	ft_printr(r);
// 	return (0);
// }
