/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbecki <hbecki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:35:12 by hbecki            #+#    #+#             */
/*   Updated: 2021/10/12 14:48:43 by hbecki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if ((*lst != NULL) && (new != NULL))
	{
		(*new).next = *lst;
		*lst = new;
	}
}
