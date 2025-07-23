/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:41:06 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/16 20:41:09 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}

// int main(){
// 	char str1[] = "UNO";
// 	char str0[] = "nOvAlId";
// 	char strv[] = "";
// 	int t1;
// 	int t0;
// 	int tv;

// 	t1 = ft_str_is_uppercase(str1) + '0';
// 	t0 = ft_str_is_uppercase(str0) + '0';
// 	tv = ft_str_is_uppercase(strv) + '0';
// 	write(1, &t1, 1);
// 	write(1, &t0, 1);
// 	write(1, &tv, 1);
// }