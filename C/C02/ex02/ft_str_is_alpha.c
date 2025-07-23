/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:40:38 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/16 22:09:05 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}

// int main(){
// 	char str1[] = "uno";
// 	char str0[] = "0notvalid";
// 	char strv[] = "";
// 	int t1;
// 	int t0;
// 	int tv;

// 	t1 = ft_str_is_alpha(str1) + '0';
// 	t0 = ft_str_is_alpha(str0) + '0';
// 	tv = ft_str_is_alpha(strv) + '0';
// 	write(1, &t1, 1);
// 	write(1, &t0, 1);
// 	write(1, &tv, 1);
// }