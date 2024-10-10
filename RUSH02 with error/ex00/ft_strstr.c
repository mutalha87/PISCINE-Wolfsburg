/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:10:58 by mutalha           #+#    #+#             */
/*   Updated: 2024/10/07 19:37:32 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"
// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i + j] == to_find[j])
			{
				j++;
			}
			else
				break ;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
// void ft_printr(char *str, char *str2, char *r)
// {
// 	if(r == NULL)
// 	{
// 		printf("Substring \"%s\" not found in \"%s\"\n", str2, str);
// 	}
// 	else if (r != NULL)
// 	{
// 		printf("Found substring: \"%s\" in \"%s\"\n", str2, str);
// 	}
// }
// int main(void)
// {
//     // Test cases
//     char str1[] = "Hello, world!";
//     char str2[] = "42 is the answer to life.";
// 	char to_find1[] = "world";
//     char to_find2[] = "answer";
//     char to_find3[] = "";
// 	printf("\nWith ft_strstr\n");
//     char *r = ft_strstr(str1, to_find1);
// 	ft_printr(str1, to_find1, r);
// 	printf("\nWith original strstr\n");
// 	r = strstr(str1, to_find1);
// 	ft_printr(str1, to_find1, r);
// 	printf("\nWith ft_strstr\n");
// 	r = ft_strstr(str1, to_find2);
// 	ft_printr(str1, to_find2, r);
// 	printf("\nWith original strstr\n");
// 	r = strstr(str1, to_find2);
// 	ft_printr(str1, to_find2, r);
// 	printf("\nWith ft_strstr\n");
// 	r = ft_strstr(str2, to_find2);
// 	ft_printr(str2, to_find2, r);
// 	printf("\nWith original strstr\n");
// 	r = strstr(str2, to_find2);
// 	ft_printr(str2, to_find2, r);
// 	printf("\nWith ft_strstr\n");
// 	r = ft_strstr(str2, to_find1);
// 	ft_printr(str2, to_find1, r);
// 	printf("\nWith original strstr\n");
// 	r = strstr(str2, to_find1);
// 	ft_printr(str2, to_find1, r);
// 	printf("\n\nNow testing the empty string\n\n");
// 	printf("\nWith ft_strstr\n");
// 	r = ft_strstr(str2, to_find3);
// 	ft_printr(str2, to_find3, r);
// 	printf("\nWith original strstr\n");
// 	r = strstr(str2, to_find3);
// 	ft_printr(str2, to_find3, r);
// }
