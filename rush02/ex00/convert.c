/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:49:32 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/27 21:03:18 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "convert.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

static void	print_hundreds(unsigned long n, t_entry *dict)
{
	unsigned long	hundreds;
	char			*word;

	if (n >= 100)
	{
		hundreds = n / 100;
		word = find_word(hundreds, dict);
		if (word)
			ft_putstr(word);
		write(1, " ", 1);
		word = find_word(100, dict);
		if (word)
			ft_putstr(word);
		if (n % 100 != 0)
			write(1, " ", 1);
	}
}

static void	print_tens(unsigned long n, t_entry *dict)
{
	unsigned long	tens;
	unsigned long	units;
	char			*word;

	if (n >= 20)
	{
		tens = (n / 10) * 10;
		word = find_word(tens, dict);
		if (word)
			ft_putstr(word);
		units = n % 10;
		if (units > 0)
		{
			write(1, " ", 1);
			word = find_word(units, dict);
			if (word)
				ft_putstr(word);
		}
	}
	else if (n > 0)
	{
		word = find_word(n, dict);
		if (word)
			ft_putstr(word);
	}
}

unsigned long	count_groups(unsigned long n)
{
	unsigned long	power;

	power = 1;
	while (n >= 1000)
	{
		n /= 1000;
		power *= 1000;
	}
	return (power);
}

// Print number (does NOT work for 0)
void	print_number_in_words(unsigned long n, t_entry *dict)
{
	unsigned long	power;
	unsigned long	group;

	power = count_groups(n);
	while (power > 0)
	{
		group = n / power;
		if (group > 0)
		{
			print_hundreds(group, dict);
			print_tens(group % 100, dict);
			if (power > 1 && find_word(power, dict))
			{
				write(1, " ", 1);
				ft_putstr(find_word(power, dict));
				if (n % power)
					write(1, " ", 1);
			}
		}
		n %= power;
		power /= 1000;
	}
}
