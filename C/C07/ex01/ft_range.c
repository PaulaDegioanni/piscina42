/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:52:52 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/23 16:50:11 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*rst;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	rst = malloc((max - min) * sizeof(int));
	if (!rst)
		return (NULL);
	while (min < max)
	{
		rst[i] = min;
		min++;
		i++;
	}
	return (rst);
}

/*int main(){
	int min = 3;
	int max = 8;
	int *arr;
	int i;

	i = 0;
	arr = ft_range(3, 10);
	if (!arr)
	{
		printf("NULL \n");
		return 0;
	}

	printf("Rango de %d a %d:\n", min, max);
	while (arr[i])
	{
		printf("%d ", arr[i]);
		i++;
	}

	free(arr);
	return 0;
}*/