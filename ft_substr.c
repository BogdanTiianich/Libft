/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbecki <hbecki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 22:51:31 by hbecki            #+#    #+#             */
/*   Updated: 2021/10/09 23:08:30 by hbecki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*pointer;
	unsigned int	i;

	i = start;
	pointer = (char *)malloc((start + len) * sizeof(char));
	if (pointer == NULL)
		return (NULL);
	while ((i < start + len) && ((char)s[i] != '\0'))
	{
		pointer[i - start] = (char)s[i];
		i++;
	}
	return (pointer);
}
