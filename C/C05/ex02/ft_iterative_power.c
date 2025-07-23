/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:47:23 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/22 17:52:04 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	rst;

	rst = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		rst *= nb;
		power--;
	}
	return (rst);
}

/*int main(){
	printf("%d\n", ft_iterative_power(2, -3)); //0
	printf("%d\n", ft_iterative_power(5, 0)); //1
	printf("%d\n", ft_iterative_power(2, 5)); //32
	printf("%d\n", ft_iterative_power(5, 3)); //125
	return 0;
}*/