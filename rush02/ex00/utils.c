/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdegioan <pdegioan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:59:07 by jose-ma2          #+#    #+#             */
/*   Updated: 2025/07/27 21:07:48 by pdegioan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Checks if the string contains only digits (0-9)
int	is_valid_number(const char *str)
{
	int	i;

	if (!str || *str == '\0')
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

// Converts a numeric string to an unsigned long
unsigned long	str_to_ulong(const char *str)
{
	unsigned long	result;
	int				i;

	result = 0;
	i = 0;
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

// Removes spaces at the beginning and end of the string
//(modifies the original string)

char	*trim_spaces(char *str)
{
	char	*end;

	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == '\0')
		return (str);
	end = str;
	while (*end)
		end++;
	end--;
	while (end > str && (*end == ' ' || *end == '\t'))
		end--;
	*(end + 1) = '\0';
	return (str);
}

// Count number of lines in buffer (adds 1 for last line without \n)
int	count_lines(const char *buffer)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			count++;
		i++;
	}
	return (count + 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
