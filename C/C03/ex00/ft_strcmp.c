/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:14:23 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/17 15:33:19 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// int main(){

// 	char s1[]="ABC";
// 	char s2[]="ABC";
// 	char s3[]="AB";
// 	char s4[]= "ABZ";

// 	int a = ft_strcmp(s1, s2); //0
// 	int b = ft_strcmp(s1, s3); // >0
// 	int c = ft_strcmp(s1, s4); // <0

// 	return (0);
// }
