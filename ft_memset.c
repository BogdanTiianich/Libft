/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbecki <hbecki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:19:34 by hbecki            #+#    #+#             */
/*   Updated: 2021/10/16 18:26:58 by hbecki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char		*tmp;
	size_t		i;

	i = 0;
	tmp = b;
	while (i < len)
	{
		tmp[i] = c;
		i++;
	}
	return (b);
}
