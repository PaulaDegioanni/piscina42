/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:41:26 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/16 20:41:28 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*rsp;

	rsp = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (rsp);
}

// int main(){
// 	char string[]= "aAnNBdjJd";
// 	int i=0;

// 	ft_strupcase(string);

// 	while(string[i])
// 	{
// 		write(1, &string[i], 1);
// 		i++;
// 	}
// 	return (0);
// }