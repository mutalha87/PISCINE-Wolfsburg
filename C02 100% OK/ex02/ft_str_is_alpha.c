/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhasanov <vhasanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 00:02:55 by vhasanov          #+#    #+#             */
/*   Updated: 2024/09/27 02:48:58 by vhasanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i]
				&& str[i] <= 'Z'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// int main(){
// 	char str[] = "aljlf0";
// 	if(ft_str_is_alpha(str)){
// 		printf("All are alphabetical characters");
// 	}else{
// 		printf("Contains non-alphabetical character");
// 	}
// 	return (0);
// }