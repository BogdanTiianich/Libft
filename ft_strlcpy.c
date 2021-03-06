/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbecki <hbecki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:25:44 by hbecki            #+#    #+#             */
/*   Updated: 2021/10/16 18:29:57 by hbecki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t		i;
	const char	*src_in;
	char		*dst_in;

	src_in = (const char *)src;
	dst_in = (char *)dst;
	i = 0;
	if (dstsize == 0)
		return (ft_strlen((char *)src_in));
	while ((i < dstsize - 1) && (src_in[i] != '\0'))
	{
		dst_in[i] = src_in[i];
		i++;
	}
	dst_in[i] = '\0';
	return (ft_strlen((char *)src_in));
}
