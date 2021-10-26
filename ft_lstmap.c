/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pniezen <pniezen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/26 17:49:50 by pniezen       #+#    #+#                 */
/*   Updated: 2021/10/26 18:41:25 by pniezen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	new_node = ft_lstnew(f(lst->content));
	if (!new_node)
		return (NULL);
	tmp = new_node;
	while (lst != NULL)
	{
		tmp->next = ft_lstnew(f(lst->content));
		tmp = new_node->next;
		if (!new_node)
			ft_lstclear(&new_node, del);
		lst = lst->next;
	}
	return (new_node);
}
