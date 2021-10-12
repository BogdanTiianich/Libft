/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbecki <hbecki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:23:06 by hbecki            #+#    #+#             */
/*   Updated: 2021/10/12 18:26:53 by hbecki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*next;

	next = lst->next;
	(*del)(lst->content);
	free(lst);
	lst = next;
}
