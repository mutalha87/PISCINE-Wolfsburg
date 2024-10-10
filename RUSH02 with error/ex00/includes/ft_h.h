/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:48:07 by mutalha           #+#    #+#             */
/*   Updated: 2024/10/07 15:30:17 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

void	ft_chunking(char	*s);
void	ft_putstr(char	*str);
void	ft_putstrn(char	*str);
void	ft_putchar(char c);
void	ft_numd(char	*c, int k);
void	ft_read_file(char	*s_s);
char	*ft_strstr(char	*str, char	*to_find);
char	*ft_trim(char	*str);
char	*ft_atoi(char	*str);
int		ft_ms_chunking(char *s, int sl);
int		ft_strlen(char	*s);
int		ft_mid_chunking(char	*s, int key, int sl);
int		ft_last_chunking(char	*s, int key);
int		ft_small_string(char	*s, int sl);

#endif 
