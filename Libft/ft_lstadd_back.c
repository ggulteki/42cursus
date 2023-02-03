/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 02:25:57 by ggulteki          #+#    #+#             */
/*   Updated: 2023/01/27 02:25:57 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new;
	}
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
	ft_lstadd_back(temp, node1);
	ft_lstadd_back(temp, node2);
	printf("%s\n%s", (*temp) -> content, (*temp)->next->content);
}
*/
