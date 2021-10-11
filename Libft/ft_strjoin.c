/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbecki <hbecki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 23:09:04 by hbecki            #+#    #+#             */
/*   Updated: 2021/10/09 23:25:43 by hbecki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*pointer_s;
	unsigned int	i;

	i = 0;
	pointer_s = (char *)malloc((ft_strlen((char *)s1) \
	 + ft_strlen((char *)s2) + 1) * sizeof(char));
	if (pointer_s == NULL)
		return (NULL);
	while (i < ft_strlen((char *)s1))
	{
		pointer_s[i] = (char)s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen((char *)s2))
	{
		pointer_s[i] = (char)s2[i];
		i++;
	}
	return (pointer_s);
}
