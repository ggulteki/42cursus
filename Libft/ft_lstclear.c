/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 01:57:46 by ggulteki          #+#    #+#             */
/*   Updated: 2023/01/27 01:57:46 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	while (*lst != NULL)
	{
		temp = *lst;
		*lst = (*lst)->next;
		(*del)(temp->content);
		free(temp);
	}
}
/*
void	del(void* del)
{
	free(del);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;

	node1 = ft_lstnew("deneme");
	node2 = ft_lstnew("DENEME");
	node1->next = node2;
	ft_lstclear(&node1, del);

}
*/
