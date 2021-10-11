/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbecki <hbecki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:59:25 by hbecki            #+#    #+#             */
/*   Updated: 2021/10/06 12:09:46 by hbecki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c);
int	ft_isalpha(int c);

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) + ft_isdigit(c) > 0)
		return (1);
	else
		return (0);
}
