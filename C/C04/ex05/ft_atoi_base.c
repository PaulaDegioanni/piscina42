/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:20:37 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/23 14:58:38 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_valid_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

// Devuelve la posición del caracter en la base o -1 si no está
int	ft_is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	rst;
	int	base_len;

	sign = 1;
	rst = 0;
	if (!ft_is_valid_base(base))
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	base_len = ft_strlen(base);
	while (ft_is_in_base(*str, base) != -1)
	{
		rst = rst * base_len + ft_is_in_base(*str, base);
		str++;
	}
	return (rst * sign);
}

/*int main(void)
{
	printf("%d\n", ft_atoi_base("1010", "01")); // 10
	printf("%d\n", ft_atoi_base("B", "0123456789ABCDEF")); // 11
	printf("%d\n", ft_atoi_base("   ---42", "0123456789")); // -42
	printf("%d\n", ft_atoi_base("hello", "ell")); // 0 (invalido)
	return 0;
}*/