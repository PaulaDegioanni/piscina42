/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 20:34:37 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/27 20:49:31 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

# include "dict.h"

// Imprimir el número completo en palabras usando el diccionario
void	print_number_in_words(unsigned long n, t_entry *dict);
void	ft_putstr(char *str);

#endif
