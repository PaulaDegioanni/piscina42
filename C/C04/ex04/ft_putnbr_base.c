/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:20:24 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/23 14:58:39 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		if (base[i] == '+' || base[i] == '-')
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

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	n;

	if (!ft_is_valid_base(base))
		return ;
	len = ft_strlen(base);
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= len)
		ft_putnbr_base(n / len, base);
	write(1, &base[n % len], 1);
}

// int main(void)
// {
// 	ft_putnbr_base(42, "0123456789"); //42
// 	write(1, "\n", 1);
// 	ft_putnbr_base(42, "01"); //101010
// 	write(1, "\n", 1);
// 	ft_putnbr_base(42, "0123456789ABCDEF"); // 2A
// 	write(1, "\n", 1);
// 	ft_putnbr_base(42, "poniguay");//
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-42, "01"); //-101010
// 	write(1, "\n", 1);
// }