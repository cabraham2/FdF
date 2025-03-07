/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:52:46 by cabraham          #+#    #+#             */
/*   Updated: 2025/03/07 17:06:08 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	if (!*lst || !del)
		return ;
	next = (*lst)->next;
	ft_lstdelone(*lst, del);
	*lst = next;
	ft_lstclear(lst, del);
}
