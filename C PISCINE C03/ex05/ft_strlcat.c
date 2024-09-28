/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:11:01 by mutalha           #+#    #+#             */
/*   Updated: 2024/09/28 16:56:51 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include <unistd.h>

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	j = dest_len;
	i = 0;
	while (src[i] != '\0' && j < size - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest_len + src_len);
}
// int main() 
// {
//     char dest1[20] = "Hello, ";
//     const char *src = "World!";
//     unsigned int size = sizeof(dest1);
//     unsigned int result_ft_strlcat = ft_strlcat(dest1, src, size);
//		printf("Using ft_strlcat:\n");
//     printf("Resulting String: %s\n", dest1);
//     printf("Total Length: %u\n", result_ft_strlcat);
//     return 0;
// }