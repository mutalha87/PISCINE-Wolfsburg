/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:30:20 by mutalha           #+#    #+#             */
/*   Updated: 2024/10/08 22:58:33 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	is_separator(char c, char *charset)
{
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}

static int	count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (!is_separator(*str, charset) && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (is_separator(*str, charset))
			in_word = 0;
		str++;
	}
	return (count);
}

static char	*get_word(char **str, char *charset)
{
	char	*start;
	int		length;
	int		i;
	char	*word;

	start = *str;
	length = 0;
	while (**str && !is_separator(**str, charset))
	{
		length++;
		(*str)++;
	}
	word = (char *)malloc(length + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < length)
	{
		word[i] = start[i];
		i++;
	}
	word[length] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		count;
	char	**result;
	int		index;

	count = count_words(str, charset);
	result = (char **)malloc((count + 1) * sizeof(char *));
	index = 0;
	while (*str)
	{
		if (!is_separator(*str, charset))
		{
			result[index] = get_word(&str, charset);
			if (!result[index])
			{
				return (NULL);
			}
			index++;
		}
		else
			str++;
	}
	result[index] = NULL;
	return (result);
}

// #include <stdio.h>
// #include <stdlib.h>

// char **ft_split(char *str, char *charset);

// int main() {
//     char *str = "Hello, world! Welcome to 42 wolfsburg.";
//     char *charset = " ,.!";

//     char **result = ft_split(str, charset);
//     if (result == NULL) {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }

//     // Print the result
//     for (int i = 0; result[i] != NULL; i++) {
//         printf("Word %d: %s\n", i, result[i]);
//         free(result[i]);
//     }
//     free(result);

//     return 0;
// }