/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:14:36 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/17 17:23:14 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*result;
	unsigned int	i;

	result = dest;
	i = 0;
	while (*dest)
		dest++;
	while (*src && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (result);
}

// int main(){
// 	char a[100]= "abc";
// 	char b[]= "defghi";
// 	int i = 0;

// 	char* concat = ft_strncat(a, b, 3);

// 	while(concat[i]){
// 		write(1, &concat[i], 1);
// 		i++;
// 	}
// 	return (0);
// }