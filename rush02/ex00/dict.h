/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:58:59 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/27 20:38:46 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

typedef struct s_entry
{
	unsigned long	number;
	char			*word;
}	t_entry;
t_entry			*load_dictionary(const char *path);
void			free_dictionary(t_entry *dict);
char			*find_word(unsigned long number, t_entry *dict);

#endif
