/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbecki <hbecki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:41:18 by hbecki            #+#    #+#             */
/*   Updated: 2021/10/08 17:30:51 by hbecki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*pointer;
	char	*buf;

	i = 0;
	buf = (char *)s;
	while ((buf[i] != '\0') && (i < n))
	{
		if (buf[i] == c)
		{
			pointer = &buf[i];
			return (pointer);
		}
		i++;
	}
	if (c == '\0')
	{
		pointer = &buf[i];
		return (pointer);
	}
	return (NULL);
}
