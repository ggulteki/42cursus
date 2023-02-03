/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 23:16:43 by ggulteki          #+#    #+#             */
/*   Updated: 2023/01/22 23:16:43 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	**temp;

	temp = malloc(sizeof(t_list *));
	node1 = ft_lstnew("deneme");
	node2 = ft_lstnew("DENEME");
	ft_lstadd_front(temp, node1);
	ft_lstadd_front(temp, node2);
	printf("%s\n%s", (*temp)->content, (*temp)->next->content);
}
*/
