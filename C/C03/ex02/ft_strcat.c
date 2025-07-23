/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:14:32 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/17 17:10:41 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*result;

	result = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}

// int main(){
// 	char a[100]= "abc";
// 	char b[]= "def";
// 	int i = 0;

// 	char* concat = ft_strcat(a, b);

// 	while(concat[i]){
// 		write(1, &concat[i], 1);
// 		i++;
// 	}
// 	return (0);
// }