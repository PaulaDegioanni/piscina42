/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:42:24 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/17 18:35:16 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_convert_to_hexa(int n)
{
	int		c;
	int		r;
	int		i;
	char	hex[16];

	i = 0;
	while (i <= 9)
	{
		hex[i] = i + '0';
		i++;
	}
	while (i <= 15)
	{
		hex[i] = i + 87;
		i++;
	}
	c = n / 16;
	r = n % 16;
	write(1, "\\", 1);
	write(1, &hex[c], 1);
	write(1, &hex[r], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str >= 127)
			ft_convert_to_hexa(*str);
		else
			write(1, str, 1);
		str++;
	}
}

// int main(){
// 	char s[] = "Coucou\ttu vas bien?";

// 	ft_putstr_non_printable(s);
// 	return (0);
// }