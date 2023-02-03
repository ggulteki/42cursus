/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:47:44 by ggulteki          #+#    #+#             */
/*   Updated: 2023/01/27 11:47:44 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*
void	myfunc(void func)
{
	printf("%s\n", func);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;

	node1 = ft_lstnew("deneme");
	node2 = ft_lstnew("DENEME");
	node1->next = node2;
	ft_lstiter(node1, myfunc);
}
*/
