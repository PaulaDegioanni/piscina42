/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:14:45 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/17 20:59:11 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_size;
	unsigned int	src_size;

	i = 0;
	while (dest[i] && i < size)
		i++;
	dest_size = i;
	while (src[j])
		j++;
	src_size = j;
	if (dest_size == size)
		return (size + src_size);
	while (src[j] && (dest_size + j + 1) < size)
	{
		dest[dest_size + j] = src[j];
		j++;
	}
	dest[dest_size + j] = '\0';
	return (dest_size + src_size);
}
