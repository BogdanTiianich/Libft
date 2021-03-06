/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbecki <hbecki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:19:02 by hbecki            #+#    #+#             */
/*   Updated: 2021/10/10 16:14:54 by hbecki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	num_of_strings(char const *s, char c, int *start)
{
	int	i;
	int	num_of_strings;
	int	k;

	i = 0;
	num_of_strings = 0;
	*start = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if ((k == 0) && (s[i] != c))
		{
			*start = i;
			k = 1;
		}
		if ((s[i] == c) && (i != 0) && (s[i - 1] != c))
			num_of_strings++;
		i++;
	}
	if (s[i - 1] != c)
		num_of_strings++;
	return (num_of_strings);
}

int	len_of_string(char const *s, char c, int start)
{
	int	i;
	int	len_of_string;

	i = start;
	len_of_string = 0;
	while (s[i] != c)
	{
		len_of_string++;
		i++;
	}
	return (len_of_string);
}

int	proceed_string(char *arr_str, char const *s, \
int start, char c)
{
	int	j;
	int	len_of_str;

	j = 0;
	len_of_str = len_of_string(s, c, start);
	while (j < len_of_str)
	{
		arr_str[j] = s[start + j];
		j++;
	}
	arr_str[j] = '\0';
	while (s[start + j] == c)
	{
		j++;
	}
	start += j;
	return (start);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_str;
	int		str_quan;
	int		len_of_str;
	int		start;
	int		i;

	str_quan = num_of_strings(s, c, &start);
	i = 0;
	arr_str = (char **)malloc((str_quan + 1) * sizeof(char *));
	if (arr_str == NULL)
		return (NULL);
	while (i < str_quan)
	{
		len_of_str = len_of_string(s, c, start);
		arr_str[i] = (char *)malloc((len_of_str + 1) * sizeof(char));
		if (arr_str[i] == NULL)
			return (NULL);
		start = proceed_string(arr_str[i], s, start, c);
		i++;
	}
	arr_str[i] = NULL;
	return (arr_str);
}
