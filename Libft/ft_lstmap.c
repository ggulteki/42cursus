/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:28:25 by ggulteki          #+#    #+#             */
/*   Updated: 2023/01/27 12:28:25 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;

	if (lst == NULL)
		return (NULL);
	tmp = NULL;
	while (lst != NULL)
	{
		new = ft_lstnew((*f)(lst->content));
		if (new == NULL)
			ft_lstclear(&new, (*del));
		else
			ft_lstadd_back(&tmp, new);
		lst = lst->next;
	}
	return (tmp);
}
/*
void    *f(void *s)
{
    return(s);
}
void    del(void *s)
{
    s = 0;
	free s;
}
void iter(void *s)
{
    printf("%s\n", (char *)s);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew("deneme1");
	node2 = ft_lstnew("deneme2");
	ft_lstadd_back(&node1, node2);
	node3 = ft_lstmap(node1, f, del);
	ft_lstiter(node3, iter);
}
*/
