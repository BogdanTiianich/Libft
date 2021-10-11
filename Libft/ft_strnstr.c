/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbecki <hbecki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 22:07:15 by hbecki            #+#    #+#             */
/*   Updated: 2021/10/06 23:02:39 by hbecki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	int		i;
	int		j;
	int		needle_len;
	char	*haystack;

	j = 0;
	haystack = (char *)hay;
	needle_len = ft_strlen((char *)needle);
	if (ft_strlen((char *)needle) == 0)
		return (haystack);
	while ((j < len) && (haystack[j] != '\0'))
	{
		i = 0;
		while ((needle[i] != '\0') && (j + i < len))
		{
			if (needle[i] != haystack[j + i])
				break ;
			i++;
		}
		if (i == needle_len)
			return (&haystack[j]);
		j++;
	}
	return (NULL);
}
