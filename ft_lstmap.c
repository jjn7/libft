/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnottle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:07:07 by jnottle           #+#    #+#             */
/*   Updated: 2022/07/14 09:52:19 by jnottle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;
	t_list	*m;

	if (!f || !del)
		return (NULL);
	l = NULL;
	while (lst)
	{
		m = ft_lstnew(f(lst->content));
		if (f == NULL)
		{
			ft_lstclear(&l, del);
			return (NULL);
		}
		ft_lstadd_back(&l, m);
		lst = lst->next;
	}
	return (l);
}
