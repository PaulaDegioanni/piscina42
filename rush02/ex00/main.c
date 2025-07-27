/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:45:06 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/27 20:45:01 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "convert.h"
#include "utils.h"
#include <unistd.h>
#include <stdlib.h>

static int	print_error(const char *msg)
{
	int	len;

	len = 0;
	while (msg[len])
		len++;
	write(1, msg, len);
	return (1);
}

int	main(int argc, char *argv[])
{
	t_entry			*dict;
	const char		*dict_path;
	unsigned long	n;

	if (argc != 2 && argc != 3)
		return (print_error("Error\n"));
	if (argc == 3)
		dict_path = argv[1];
	else
		dict_path = "numbers.dict";
	dict = load_dictionary(dict_path);
	if (!dict)
		return (print_error("Dict Error\n"));
	if (!is_valid_number(argv[argc - 1]))
	{
		free_dictionary(dict);
		return (print_error("Error\n"));
	}
	n = str_to_ulong(argv[argc - 1]);
	if (n == 0)
		ft_putstr(find_word(0, dict));
	else
		print_number_in_words(n, dict);
	free_dictionary(dict);
	return (0);
}
