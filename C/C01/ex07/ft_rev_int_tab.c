/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:14:59 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/16 20:17:16 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size -1 - i] = temp;
		i++;
	}
}

// int main(){

// 	int d[5] = {1, 2, 3, 4, 5};
// 	int j;

// 	j = 0;
// 	ft_rev_int_tab(d, 5);

// 	while(j < 5){
// 		char c = d[j] + '0';
// 		write(1, &c, 1);
// 		j++;
// 	}
// }