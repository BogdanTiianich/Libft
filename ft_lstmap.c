/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbecki <hbecki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:27:52 by hbecki            #+#    #+#             */
/*   Updated: 2021/10/12 21:00:08 by hbecki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;

	tmp = NULL;
	while (lst != NULL)
	{
		if (tmp != NULL)
			ft_lstadd_back(&tmp, new);
		new = ft_lstnew((*f)(lst->content));
		// if (new == NULL)
		// {
		// 	ft_lstclear(&new, del);
		// 	return (NULL);
		// }
		(*del)(lst->content);
		tmp = lst;
		lst = lst->next;
		free(tmp);
		tmp = new;
	}
	return (new);
}
