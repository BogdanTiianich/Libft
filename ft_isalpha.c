/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbecki <hbecki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:31:02 by hbecki            #+#    #+#             */
/*   Updated: 2021/10/06 12:09:43 by hbecki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int c);
int	ft_islower(int c);

int	ft_isalpha(int c)
{
	if (ft_islower(c) + ft_isupper(c) > 0)
		return (1);
	else
		return (0);
}
