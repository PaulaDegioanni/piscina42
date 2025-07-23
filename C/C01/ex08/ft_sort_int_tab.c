/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:58:06 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/16 20:17:15 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	backup;

	backup = *a;
	*a = *b;
	*b = backup;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	j = 0;
	while (j < size - 1)
	{
		i = j + 1;
		while (i < size)
		{
			if (tab[i] < tab[j])
			{
				ft_swap(&tab[j], &tab[i]);
			}
			i++;
		}
		j++;
	}
}

// int main()
// {
// 	int d[5] = {8, 5, 2, 4, 1};
// 	int j;

// 	j = 0;
// 	ft_sort_int_tab(d, 5);

// 	while(j < 5){
// 		char c = d[j] + '0';
// 		write(1, &c, 1);
// 		j++;
// 	}
// }