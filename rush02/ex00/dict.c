/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:58:07 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/27 19:47:48 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "file_utils.h"
#include "utils.h"
#include <stdlib.h>

// Free memory allocated by dict
void	free_dictionary(t_entry *dict)
{
	int	i;

	i = 0;
	if (!dict)
		return ;
	while (dict[i].word)
	{
		free(dict[i].word);
		i++;
	}
	free(dict);
}

// Load dict from file. Returns a pointer to the first entry
t_entry	*load_dictionary(const char *path)
{
	char	*content;
	int		line_count;
	t_entry	*dict;
	int		success;

	content = read_file_content(path);
	if (!content)
		return (NULL);
	line_count = count_lines(content);
	dict = malloc(sizeof(t_entry) * (line_count + 1));
	if (!dict)
	{
		free(content);
		return (NULL);
	}
	success = parse_dictionary_lines(content, dict);
	if (!success)
	{
		free_dictionary(dict);
		free(content);
		return (NULL);
	}
	free(content);
	return (dict);
}

// Find word given a number
char	*find_word(unsigned long number, t_entry *dict)
{
	int	i;

	i = 0;
	while (dict[i].word)
	{
		if (dict[i].number == number)
			return (dict[i].word);
		i++;
	}
	return (NULL);
}
