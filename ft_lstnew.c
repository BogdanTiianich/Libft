/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbecki <hbecki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:53:59 by hbecki            #+#    #+#             */
/*   Updated: 2021/10/11 18:29:18 by hbecki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
t_list	*ft_lstnew(void *content)
{
	t_list	*new;
	int		size;

	new = (t_list *)malloc(sizeof(t_list));
	(*new).next = NULL;
	size = sizeof(content);
	new->content = (void *)malloc(size);
	new->content = content;
	return (new);
}
