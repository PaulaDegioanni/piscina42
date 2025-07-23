/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:40:29 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/16 22:09:07 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*start;
	unsigned int	i;

	i = 0;
	start = dest;
	while (*src && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (start);
}

// int main(void)
// {
// 	char src[] = "Lorem Ipsum";
// 	char dest[100];
// 	int i = 0;

// 	ft_strncpy(dest, src, 5);

// 	while (dest[i])
// 	{
// 		write(1, &dest[i], 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }