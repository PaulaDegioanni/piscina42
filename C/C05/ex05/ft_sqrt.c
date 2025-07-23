/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:47:33 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/23 12:34:40 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*int main(){
	printf("%d\n", ft_sqrt(-16)); //0
	printf("%d\n", ft_sqrt(16)); // 4
	printf("%d\n", ft_sqrt(1)); // 1
	printf("%d\n", ft_sqrt(100)); // 10
	printf("%d\n", ft_sqrt(18)); // 0
}*/