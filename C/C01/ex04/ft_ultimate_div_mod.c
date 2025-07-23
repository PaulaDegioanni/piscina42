/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:14:02 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/16 20:17:20 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	rs;
	int	md;

	rs = *a / *b;
	md = *a % *b;
	*a = rs;
	*b = md;
}

// int main()
// {
// 	int x = 11;
// 	int y = 2;

// 	ft_ultimate_div_mod(&x, &y);
// 	write(1, " ", 1);
// 	return 0;
// }
