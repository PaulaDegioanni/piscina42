/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:42:12 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/16 22:09:21 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	if (size == 0)
		return (length);
	while (src[length])
		length++;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length);
}

// int main()
// {
// 	char s[] = "origen";
// 	char d[10];
// 	int i=0;

// 	ft_strlcpy(d, s, 6);

// 	while(d[i]){
// 		write(1, &d[i], 1);
// 		i++;
// 	}
// 	return (0);
// }