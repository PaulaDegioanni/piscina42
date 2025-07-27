/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 20:23:48 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/27 20:26:05 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

int				is_valid_number(const char *str);
unsigned long	str_to_ulong(const char *str);
char			*trim_spaces(char *str);
int				count_lines(const char *buffer);
char			*ft_strcpy(char *dest, char *src);

#endif
