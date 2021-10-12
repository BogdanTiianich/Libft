/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbecki <hbecki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 20:16:46 by hbecki            #+#    #+#             */
/*   Updated: 2021/10/09 20:37:35 by hbecki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strdup(const char *s1)
{
	char	*pointer;
	int		i;

	i = 0;
	pointer = (char *)malloc(ft_strlen((char *)s1) * sizeof(char));
	if (pointer == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	while (i < ft_strlen((char *)s1))
	{
		pointer[i] = s1[i];
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}
