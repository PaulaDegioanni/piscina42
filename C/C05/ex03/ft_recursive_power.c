/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:47:27 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/23 12:20:19 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int main(){
	printf("%d\n", ft_recursive_power(2, -3)); //0
	printf("%d\n", ft_recursive_power(5, 0)); //1
	printf("%d\n", ft_recursive_power(2, 5)); //32
	printf("%d\n", ft_recursive_power(5, 3)); //125
	return 0;
}*/