/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:40:48 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/16 22:09:03 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!((*str >= '0' && *str <= '9')))
			return (0);
		str++;
	}
	return (1);
}

// int main(){
// 	char str1[] = "111";
// 	char str0[] = "0notvalid";
// 	char strv[] = "";
// 	int t1;
// 	int t0;
// 	int tv;

// 	t1 = ft_str_is_numeric(str1) + '0';
// 	t0 = ft_str_is_numeric(str0) + '0';
// 	tv = ft_str_is_numeric(strv) + '0';
// 	write(1, &t1, 1);
// 	write(1, &t0, 1);
// 	write(1, &tv, 1);
// }