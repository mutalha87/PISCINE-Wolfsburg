/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 22:07:11 by mutalha           #+#    #+#             */
/*   Updated: 2024/10/07 19:35:10 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	ft_read_file(char	*s_s)
{
	int		fd;
	char	*fname;
	char	*buffer;
	ssize_t	b_r;
	char	*req_l;

	fname = "numbers.dict";
	fd = open(fname, O_RDONLY);
	buffer = (char *)malloc(1024);
	b_r = read(fd, buffer, 1023);
	buffer[b_r] = '\0';
	req_l = ft_strstr(buffer, s_s);
	if (req_l != NULL)
	{
		ft_putstr(ft_trim(req_l));
		ft_putchar(' ');
	}
	else
	{
		write(1, "String not found ", 16);
		ft_putstr(s_s);
		write(1, "in the file.\n", 13);
	}
	free(buffer);
	close(fd);
}
