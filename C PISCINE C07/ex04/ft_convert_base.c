/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:41:48 by mutalha           #+#    #+#             */
/*   Updated: 2024/10/08 16:30:49 by mutalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *s);
int		is_valid_base(char *base);
void	ft_strrev(char *str, int len);
char	*decimaltocustombase(int num, char *base);
int		convert_to_base(int num, char *base, char *result);
char	*inttochar(long int num, long int s);

int	ft_int_num(int l_n, char *b_c, char *n, int l_b_c)
{
	int	i;
	int	d_v;
	int	j;
	int	d;

	d = 0;
	i = -1;
	l_b_c = ft_strlen(b_c);
	if (n[0] == '-')
		i = 0;
	while (++i < l_n)
	{
		d_v = 0;
		j = -1;
		while (++j < l_b_c)
		{
			if (n[i] == b_c[j])
			{
				d_v = j;
				break ;
			}
		}
		d = d * l_b_c + d_v;
	}
	return (d);
}

int	base_to_decimal(char *n, char *b_c)
{
	long int	s;
	int			l_n;
	long int	d;
	int			l_b_c;

	l_n = ft_strlen(n);
	l_b_c = ft_strlen(b_c);
	s = 1;
	if (n[0] == '-')
	{
		s = -1;
	}
	d = ft_int_num(l_n, b_c, n, l_b_c);
	d = d * s;
	return (d);
}

int	ft_is_char(char ch, char	*comp)
{
	int		i;

	i = 0;
	while (comp[i])
	{
		if (ch == comp[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_atoi_base(char *str, char *base)
{
	char	*nb;
	char	*ws;
	int		n;
	int		i;
	int		j;

	n = 0;
	i = 0;
	j = 0;
	ws = "\f\n\r\t\v ";
	while (ft_is_char(str[i], ws))
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			n++;
	nb = (char *)malloc(34);
	if (!nb)
		return (NULL);
	if (n % 2)
		nb[j++] = '-';
	while (ft_is_char(str[i], base))
		nb[j++] = str[i++];
	nb[j] = '\0';
	return (nb);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*num;
	int		dnum;

	if (!is_valid_base(base_from))
		return (NULL);
	if (!is_valid_base(base_to))
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	dnum = base_to_decimal(num, base_from);
	num = decimaltocustombase(dnum, base_to);
	return (num);
}

// int main()//Real Main
// {
// 	char	*basef = "01234567";
// 	char	*baset = "0123456789ABCDEF";
// 	char 	*numb = "\n\t\v\f    -+-+-+34567ab123 ";
// 	printf("%s  ",ft_convert_base(numb, basef, baset));
// }
