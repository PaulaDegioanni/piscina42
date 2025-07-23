/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:47:14 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/22 17:26:23 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	rst;

	rst = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		rst *= nb;
		nb--;
	}
	return (rst);
}

/*int main(){
	printf("%d\n", ft_iterative_factorial(2));
	printf("%d\n", ft_iterative_factorial(4));
	printf("%d\n", ft_iterative_factorial(5));
	return 0;
}*/