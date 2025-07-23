/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:14:28 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/17 16:24:17 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if ((s1[i] != s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// int main(){

// 	char s1[]="ABC";
// 	char s2[]="ABCD";
// 	char s3[]="ABD";
// 	char s4[]= "ABBA";

// 	int a = ft_strncmp(s1, s2, 3) + '0'; //0 -- ABC = ABC
// 	int b = ft_strncmp(s1, s3, 3) + '0'; //  <0 (-1) -- ABC < ABD
// 	int c = ft_strncmp(s1, s3, 2) + '0'; // 0 -- AB = AB
// 	int d = ft_strncmp(s1, s4, 3) + '0'; // >0 (1) -- ABC > ABB

// 	write(1, &a, 1);
// 	write(1, &b, 1);
// 	write(1, &c, 1);
// 	write(1, &d, 1);
// 	return (0);
// }