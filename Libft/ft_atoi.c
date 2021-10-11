/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbecki <hbecki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 21:44:11 by hbecki            #+#    #+#             */
/*   Updated: 2021/10/06 13:02:28 by hbecki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *s)
{
	int	i;
	int	result;
	int	ngtv;

	i = 0;
	result = 0;
	ngtv = 0;
	while (((s[i] == ' ') || (s[i] == '\n') || \
	 (s[i] == '\t') || (s[i] == '\v') \
	 || (s[i] == '\f') || (s[i] == '\r')) && (s[i] != '\0'))
		i++;
	if (((s[i] == '-') || (s[i] == '+')) && (s[i] != '\0'))
	{
		if (s[i] == '-')
			ngtv++;
		i++;
	}
	while (((s[i] >= '0') && (s[i] <= '9')) && (s[i] != '\0'))
	{
		result = result * 10 + s[i] - '0';
		i++;
	}
	if (ngtv % 2 != 0)
		result *= -1;
	return (result);
}