/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbecki <hbecki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 11:33:33 by hbecki            #+#    #+#             */
/*   Updated: 2021/10/10 16:09:55 by hbecki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_strtrim_helper(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	int		sum;

	i = 0;
	j = 0;
	k = 0;
	sum = 0;
	while (s1[i] != '\0')
	{
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				k++;
			j++;
		}
		if (k == 0)
			break ;
		sum = sum + k;
		k = 0;
		j = 0;
		i++;
	}
	return (sum);
}

int	ft_strtrim_helper_rev(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	int		sum;

	i = ft_strlen((char *)s1) - 1;
	j = 0;
	k = 0;
	sum = 0;
	while (i >= 0)
	{
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				k++;
			j++;
		}
		if (k == 0)
			break ;
		sum = sum + k;
		k = 0;
		j = 0;
		i--;
	}
	return (sum);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*pointer;
	int		i;
	int		symbols_beginning;
	int		symbols_at_end;

	symbols_beginning = ft_strtrim_helper(s1, set);
	symbols_at_end = ft_strtrim_helper(s1, set);
	pointer = (char *)malloc(ft_strlen((char *)s1 - symbols_beginning \
	- symbols_at_end + 1) * sizeof(char));
	i = symbols_beginning;
	if (pointer == NULL)
		return (NULL);
	while (i < ft_strlen((char *)s1) - ft_strtrim_helper_rev(s1, set))
	{
		pointer[i - symbols_beginning] = s1[i];
		i++;
	}
	pointer[i - symbols_beginning] = '\0';
	return (pointer);
}
