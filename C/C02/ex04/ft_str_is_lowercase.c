/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:40:57 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/16 22:08:59 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}

// int main(){
// 	char str1[] = "uno";
// 	char str0[] = "nOvAlId";
// 	char strv[] = "";
// 	int t1;
// 	int t0;
// 	int tv;

// 	t1 = ft_str_is_lowercase(str1) + '0';
// 	t0 = ft_str_is_lowercase(str0) + '0';
// 	tv = ft_str_is_lowercase(strv) + '0';
// 	write(1, &t1, 1);
// 	write(1, &t0, 1);
// 	write(1, &tv, 1);
// }