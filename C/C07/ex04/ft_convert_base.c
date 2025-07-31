/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:53:06 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/31 15:01:33 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int		ft_strlen(char *str);
int		ft_is_valid_base(char *base);
int		ft_atoi_base(char *str, char *base);

static int	ft_nbrlen_base(long nbr, int base_len)
{
	int	len;

	len = (nbr <= 0);
	while (nbr)
	{
		nbr /= base_len;
		len++;
	}
	return (len);
}

static void	fill_digits(char *str, long nb, char *base, int len)
{
	int	base_len;

	base_len = ft_strlen(base);
	while (nb > 0)
	{
		str[--len] = base[nb % base_len];
		nb /= base_len;
	}
}

static char	*ft_putnbr_base_str(int nbr, char *base)
{
	long	nb;
	int		base_len;
	int		len;
	char	*str;

	base_len = ft_strlen(base);
	nb = nbr;
	len = ft_nbrlen_base(nb, base_len);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb == 0)
		str[0] = base[0];
	else
	{
		if (nb < 0)
		{
			str[0] = '-';
			nb = -nb;
		}
		fill_digits(str, nb, base, len);
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	char	*result;

	if (!ft_is_valid_base(base_from) || !ft_is_valid_base(base_to))
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	result = ft_putnbr_base_str(num, base_to);
	return (result);
}

// int main(void)
// {
// 	char *res;

// 	res = ft_convert_base("1010", "01", "0123456789");
// 	printf("%s\n", res); // 10
// 	free(res);

// 	res = ft_convert_base("-42", "0123456789", "0123456789ABCDEF");
// 	printf("%s\n", res); // -2A
// 	free(res);

// 	res = ft_convert_base("2A", "0123456789ABCDEF", "01234567");
// 	printf("%s\n", res); // 52
// 	free(res);

// 	res = ft_convert_base("42", "0", "0123456789");
// 	printf("%s\n", res); // NULL
// 	free(res);

// 	return 0;
// }
