/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:58:31 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/15 16:06:21 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_digits(char *digits, int n)
{
	int	i;

	i = 0;
	while (i < n)
		ft_putchar(digits[i++] + '0');
}

int	is_last_comb(char *digits, int n)
{
	return (digits[0] == 10 - n);
}

void	increment_digits(char *digits, int n)
{
	int	i;

	i = n - 1;
	while (i >= 0)
	{
		if (digits[i] < 9 - (n - 1 - i))
		{
			digits[i]++;
			while (++i < n)
				digits[i] = digits[i - 1] + 1;
			break ;
		}
		i--;
	}
}

void	ft_print_combn(int n)
{
	char	d[10];
	int		i;

	if (n <= 0 || n >= 10)
		return ;
	i = -1;
	while (++i < n)
		d[i] = i;
	while (!is_last_comb(d, n))
	{
		ft_print_digits(d, n);
		write(1, ", ", 2);
		increment_digits(d, n);
	}
	ft_print_digits(d, n);
}
