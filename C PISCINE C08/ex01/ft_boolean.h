/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:01:08 by mutalha           #+#    #+#             */
/*   Updated: 2024/10/10 14:27:45 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define TRUE  1
# define FALSE 0
# define SUCCESS 0
# define EVEN_MSG    "I have an even number of arguments.\n"
# define ODD_MSG     "I have an odd number of arguments.\n"
# define EVEN(nbr) (nbr % 2 == 0)

void	ft_putstr(char *str);

typedef int	t_bool;

#endif