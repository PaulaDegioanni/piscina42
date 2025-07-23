/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:14:41 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/17 20:13:29 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (!*to_find)
		return (str);
	while (*str)
	{
		i = 0;
		while (str[i] == to_find[i] && *to_find)
		{
			i++;
			if (to_find[i] == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}

// int main(){
// 	char* d= "";
// 	char* a="hola mundoliano";
// 	char* b= "oli";
// 	char* c= "undx";

// 	int i = 0;
// 	char* emptystring = ft_strstr(a, d);
// 	char* find = ft_strstr(a, b);
// 	char* notfound = ft_strstr(a, c);

// 	while(emptystring[i]){
// 		write(1, &emptystring[i], 1);
// 		i++;
// 	}
// 	write(1, " ", 1);
// 	i = 0;
// 	while(find[i]){
// 		write(1, &find[i], 1);
// 		i++;
// 	}
// 	write(1, " ", 1);
// 	if(!notfound)
// 		write(1, "NULL ", 5);
// }