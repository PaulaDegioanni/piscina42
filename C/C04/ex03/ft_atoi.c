/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:20:13 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/23 14:58:41 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	rst;
	int	neg;

	rst = 0;
	neg = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		rst = rst * 10 + (*str - '0');
		str++;
	}
	return (rst * neg);
}

/*int main()
{
	char s[]="	---+--+1234ab567";
	char t[]="--12 34ab567";
	char u[]="-1234ab567";

	int a = atoi(s);
	int af = ft_atoi(s);
	int b = atoi(t);
	int bf =ft_atoi(t);
	int c = atoi(u);
	int cf =ft_atoi(u);

	printf("atoi(s) = %d, ft_atoi(s) = %d\n", a, af);
    printf("atoi(t) = %d, ft_atoi(t) = %d\n", b, bf);
	printf("atoi(t) = %d, ft_atoi(t) = %d\n", c, cf);
}*/