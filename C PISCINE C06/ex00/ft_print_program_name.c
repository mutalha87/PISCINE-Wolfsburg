/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:01:19 by mutalha           #+#    #+#             */
/*   Updated: 2024/10/01 17:33:07 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*name;

	name = argv[argc - 1];
	while (*name)
	{
		write(1, name, 1);
		name++;
	}
	write(1, "\n", 1);
	return (0);
}
