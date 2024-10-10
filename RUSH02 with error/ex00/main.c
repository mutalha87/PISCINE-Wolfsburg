/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:57:06 by mutalha           #+#    #+#             */
/*   Updated: 2024/10/07 18:47:43 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	main(int argc, char **argv)
{
	char	*num;
	char	*lib;

	if (argc == 2)
	{
		num = (char *)malloc((ft_strlen(argv[argc - 1]) + 1) * sizeof(char));
		num = argv[argc - 1];
		num = ft_atoi(num);
		ft_chunking(num);
	}
	else if (argc == 3)
	{
		num = (char *)malloc((ft_strlen(argv[argc - 1]) + 1) * sizeof(char));
		num = argv[argc - 1];
		lib = argv[argc - 2];
		num = ft_atoi(num);
		printf("%s\n", lib);
		printf("%s", num);
	}
	else
		printf("Error\n");
}
