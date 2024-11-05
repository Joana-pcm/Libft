/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpatrici <jpatrici@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:25:23 by jpatrici          #+#    #+#             */
/*   Updated: 2024/11/05 17:13:00 by jpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n;
	t_list	*no;

	if (!lst || !f || !del)
		return (0);
	while (lst)
	{
		no = ft_lstnew(f(lst->content));
		if (no == NULL)
		{
			del(no);
			ft_lstclear(&n, (del));
			return (0);
		}
		ft_lstadd_back(&n, no);
		if (!ft_lstlast(n))
		{
			del(no);
			ft_lstclear(&n, (del));
			return (0);
		}
		lst = lst->next;
	}
	return (n);
}
