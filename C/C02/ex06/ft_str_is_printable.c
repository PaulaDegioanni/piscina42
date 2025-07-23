/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:41:17 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/16 20:41:20 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 127)
			return (0);
		str++;
	}
	return (1);
}

// int main(){
// 	char str1[] = "UNO";
// 	char str0[] = "nOv\tAlId";
// 	char strv[] = "";
// 	int t1;
// 	int t0;
// 	int tv;

// 	t1 = ft_str_is_printable(str1) + '0';
// 	t0 = ft_str_is_printable(str0) + '0';
// 	tv = ft_str_is_printable(strv) + '0';
// 	write(1, &t1, 1);
// 	write(1, &t0, 1);
// 	write(1, &tv, 1);
// }