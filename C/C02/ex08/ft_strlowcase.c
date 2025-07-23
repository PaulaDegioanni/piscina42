/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:41:54 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/16 20:41:57 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*rsp;

	rsp = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (rsp);
}

// int main(){
// 	char string[] "aAnNBdjJd";
// 	int i=0;

// 	ft_strlowcase(string);

// 	while(string[i])
// 	{
// 		write(1, &string[i], 1);
// 		i++;
// 	}
// 	return (0);
// }