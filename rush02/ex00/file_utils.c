/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:24:16 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/27 21:04:43 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "utils.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

static char	*get_next_line_pointer(char *line)
{
	char	*next;

	next = line;
	while (*next && *next != '\n')
		next++;
	if (*next == '\n')
	{
		*next = '\0';
		next++;
	}
	return (next);
}

int	parse_line(char *line, t_entry *entry)
{
	char	*colon;
	char	*word;
	int		word_len;

	colon = line;
	while (*colon && *colon != ':')
		colon++;
	if (*colon != ':')
		return (0);
	*colon = '\0';
	word = trim_spaces(colon + 1);
	line = trim_spaces(line);
	word_len = 0;
	while (word[word_len])
		word_len++;
	if (!is_valid_number(line))
		return (0);
	entry->number = str_to_ulong(line);
	entry->word = malloc(sizeof(char) * (word_len + 1));
	if (!entry->word)
		return (0);
	ft_strcpy(entry->word, word);
	return (1);
}

// Parse all dictionary lines
int	parse_dictionary_lines(char *content, t_entry *dict)
{
	char	*line;
	char	*next_line;
	int		index;
	int		valid;

	index = 0;
	line = content;
	while (line && *line)
	{
		next_line = get_next_line_pointer(line);
		if (*line != '\0')
		{
			valid = parse_line(line, &dict[index]);
			if (!valid)
				return (0);
			index++;
		}
		line = next_line;
	}
	dict[index].number = 0;
	dict[index].word = NULL;
	return (1);
}

// Concat read content
char	*append_content(char *content, char *buffer, int total_len, int bytes)
{
	char	*temp;
	int		i;

	temp = malloc(total_len + bytes + 1);
	if (!temp)
		return (NULL);
	i = 0;
	while (i < total_len)
	{
		temp[i] = content[i];
		i++;
	}
	i = 0;
	while (i < bytes)
	{
		temp[total_len + i] = buffer[i];
		i++;
	}
	temp[total_len + bytes] = '\0';
	if (content)
		free(content);
	return (temp);
}

char	*read_file_content(const char *path)
{
	int		fd;
	int		bytes;
	char	buffer[BUFFER_SIZE + 1];
	char	*content;
	int		total_len;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (NULL);
	content = NULL;
	total_len = 0;
	bytes = read(fd, buffer, BUFFER_SIZE);
	while (bytes > 0)
	{
		content = append_content(content, buffer, total_len, bytes);
		if (!content)
			return (NULL);
		total_len += bytes;
		bytes = read(fd, buffer, BUFFER_SIZE);
	}
	close(fd);
	return (content);
}
