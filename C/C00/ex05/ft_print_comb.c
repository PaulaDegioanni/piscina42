/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 20:22:08 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/10 21:00:10 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb_aux(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write(1, ", ", 2);
	}
	if (c < '9')
	{
		ft_print_comb_aux(a, b, c + 1);
		return ;
	}
	if (b < '8')
	{
		ft_print_comb_aux(a, b + 1, b + 2);
		return ;
	}
	if (a < '7')
	{
		ft_print_comb_aux(a + 1, a + 2, a + 3);
		return ;
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	ft_print_comb_aux(a, b, c);
}

// De forma secuencial
// void	ft_print_comb(void)
// {
// 	int a;
// 	int b;
// 	int c;
// 	char ca;
// 	char cb;
// 	char cc;

// 	a = 0;
// 	while (a <= 7)
// 	{
// 		b = a + 1;
// 		while (b <= 8)
// 		{
// 			c = b + 1;
// 			while (c <= 9)
// 			{
// 				ca = a + '0';
// 				cb = b + '0';
// 				cc = c + '0';
// 				write(1, &ca, 1);
// 				write(1, &cb, 1);
// 				write(1, &cc, 1);
// 				if (!(a == 7 && b == 8 && c == 9))
// 					write(1, ", ", 2);
// 				c++;
// 			}
// 			b++;
// 		}
// 		a++;
// 	}
// }