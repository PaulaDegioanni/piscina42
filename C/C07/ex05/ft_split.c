/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:53:18 by pdegioan          #+#    #+#             */
/*   Updated: 2025/07/30 21:25:07 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_word_count(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (!ft_is_sep(*str, charset) && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (ft_is_sep(*str, charset))
			in_word = 0;
		str++;
	}
	return (count);
}

int	ft_word_len(char *str, char *charset)
{
	int	len;

	len = 0;
	while (str[len] && !ft_is_sep(str[len], charset))
		len++;
	return (len);
}

char	*ft_copy_word(char *str, char *charset)
{
	char	*word;
	int		len;
	int		i;

	len = ft_word_len(str, charset);
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		words;
	int		i;

	words = ft_word_count(str, charset);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*str)
	{
		if (!ft_is_sep(*str, charset))
		{
			result[i] = ft_copy_word(str, charset);
			str += ft_word_len(str, charset);
			i++;
		}
		else
			str++;
	}
	result[i] = NULL;
	return (result);
}

// int main(void)
// {
// 	char str[] = "Hola,,mundo;42  piscina";
// 	char charset[] = ",; ";
// 	char **split = ft_split(str, charset);
// 	int i = 0;

// 	while (split[i])
// 	{
// 		printf("[%s]\n", split[i]);
// 		free(split[i]);
// 		i++;
// 	}
// 	free(split);
// 	return 0;
// }