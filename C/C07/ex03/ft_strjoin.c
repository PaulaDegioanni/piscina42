/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:53:01 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/30 20:53:55 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	total = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	return (total);
}

char	*ft_copy_str(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	char	*ptr;
	int		i;

	if (size == 0)
	{
		result = malloc(1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	result = malloc(ft_total_length(size, strs, sep) + 1);
	if (!result)
		return (NULL);
	ptr = result;
	i = 0;
	while (i < size)
	{
		ptr = ft_copy_str(ptr, strs[i]);
		if (i++ < size - 1)
			ptr = ft_copy_str(ptr, sep);
	}
	*ptr = '\0';
	return (result);
}

// int main(void)
// {
// 	char *words[] = {"Hola", "mundo", "42"};
// 	char *sep = ", ";
// 	char *result;

// 	result = ft_strjoin(3, words, sep);
// 	printf("%s\n", result); // "Hola, mundo, 42"

// 	free(result);
// 	return 0;
// }