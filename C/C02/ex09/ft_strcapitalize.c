/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:42:03 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/16 22:09:29 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*rst;
	int		nw;

	rst = str;
	nw = 1;
	while (*str)
	{
		if (!(((*str >= 'a') && (*str <= 'z')) || ((*str >= 'A')
					&& (*str <= 'Z')) || ((*str >= '0') && (*str <= '9'))))
			nw = 1;
		else
		{
			if (!nw && (*str >= 'A') && (*str <= 'Z'))
				*str = *str + 32;
			else if (nw && (*str >= 'a') && (*str <= 'z'))
				*str = *str - 32;
			nw = 0;
		}
		str++;
	}
	return (rst);
}

// int main(){
// char salut[]= "salut, comment tu vas ?
// 42mots quarante-deux; cinquante+et+un";
// int i=0;

// 	ft_strcapitalize(salut);

// 	while(salut[i]){
// 		write(1, &salut[i], 1);
// 		i++;
// 	}
// 	return (0);
// }