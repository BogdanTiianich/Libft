/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbecki <hbecki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 19:00:45 by hbecki            #+#    #+#             */
/*   Updated: 2021/10/10 19:17:06 by hbecki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*result;
	unsigned int		i;

	i = 0;
	result = (char *)malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = f(i, (char)s[i]);
		i++;
	}
	return (result);
}
