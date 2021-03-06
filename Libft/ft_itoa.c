/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbecki <hbecki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:11:28 by hbecki            #+#    #+#             */
/*   Updated: 2021/10/10 19:00:20 by hbecki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int static	ft_itoa_helper(int n, char *s, int i, int NUM)
{
	if ((n / 10) * i > 0)
	{
		NUM = ft_itoa_helper(n / 10, s, i, NUM);
	}
	if ((i == -1) && !((n / 10) * i > 0))
	{
		s[0] = '-';
		NUM++;
	}
	s[NUM] = (n % 10) * i + '0';
	NUM++;
	return (NUM);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = 1;
	if (n < 0)
		i = -1;
	str = (char *)malloc((11 + 1 + 1) * sizeof(char));
	ft_itoa_helper(n, str, i, 0);
	return (str);
}
