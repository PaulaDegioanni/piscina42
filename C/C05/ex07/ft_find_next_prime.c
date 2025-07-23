/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:47:39 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/23 12:31:20 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

// int main(){
// 	printf("%d\n", ft_find_next_prime(0)); // 0
// 	printf("%d\n", ft_find_next_prime(1)); // 1
// 	printf("%d\n", ft_find_next_prime(4)); // 5
// 	printf("%d\n", ft_find_next_prime(20)); //23
// 	printf("%d\n", ft_find_next_prime(513)); //521
// 	return 0;
// }
