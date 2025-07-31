/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:52:48 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/31 14:28:16 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*rst;

	i = 0;
	rst = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!rst)
		return (NULL);
	while (src[i])
	{
		rst[i] = src[i];
		i++;
	}
	rst[i] = '\0';
	return (rst);
}

// int main(void)
// {
// 	char *src = "Hello world";
// 	char *copy;

// 	copy = ft_strdup(src);
// 	if (!copy)
// 		printf("Error\n");
// 	printf("src: %s\n", src);
// 	printf("copy: %s\n", copy);
// 	copy[0] = 'X';
// 	free(copy);
// 	return 0;
// }