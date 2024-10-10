/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhasanov <vhasanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 22:17:24 by vhasanov          #+#    #+#             */
/*   Updated: 2024/09/27 21:01:04 by vhasanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main(){
// 	char src[] = "abc";
// 	int size = sizeof(src)/sizeof(int);
// 	char dest[size];
// 	ft_strcpy(dest, src);
// 	printf("src = %s\n", src);
// 	printf("dest = %s", dest);
// 	return (0);
// }