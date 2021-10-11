/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbecki <hbecki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:35:15 by hbecki            #+#    #+#             */
/*   Updated: 2021/10/10 17:57:56 by hbecki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*src_in;
	char		*dst_in;

	src_in = (const char *)src;
	dst_in = (char *)dst;
	i = 0;
	if (dst_in < src_in)
	{
		while ((i < len) && (dst_in[i] != '\0'))
		{
			dst_in[i] = src_in[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			dst_in[len - 1] = src_in[len - 1];
			len--;
		}
	}
	return (dst);
}
