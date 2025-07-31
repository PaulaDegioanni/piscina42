/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:52:57 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/27 21:26:00 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (!*range)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

/*void test_range(int min, int max)
{
    int *arr;
    int size;
    int i;

    size = ft_ultimate_range(&arr, min, max);

    if (size == -1)
    {
        printf("Error: malloc falló\n");
        return;
    }

    if (size == 0)
    {
        printf("Rango vacío: min=%d, max=%d → *range = NULL\n", min, max);
        return;
    }

    printf("Rango de %d a %d (size=%d): ", min, max, size);
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr); // Liberar memoria reservada
}

int main(void)
{
    test_range(3, 7);  // 3 4 5 6
    test_range(-2, 3); // -2 -1 0 1 2
    test_range(5, 5);  // *range = NULL
    test_range(10, 5); // *range = NULL

    return 0;
}*/