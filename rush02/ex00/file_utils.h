/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:35:43 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/27 20:25:29 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_UTILS_H
# define FILE_UTILS_H

char	*read_file_content(const char *path);
char	*append_content(char *content, char *buffer, int total_len, int bytes);
int		parse_line(char *line, t_entry *entry);
int		parse_dictionary_lines(char *content, t_entry *dict);

#endif
