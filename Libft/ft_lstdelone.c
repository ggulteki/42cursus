/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 23:38:10 by ggulteki          #+#    #+#             */
/*   Updated: 2023/01/26 23:38:10 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*temp;

	temp = lst;
	if (lst == NULL)
		return ;
	lst = lst->next;
	(*del)(temp->content);
	free(temp);
}
/*
void	del(void* del)
{
	free(del);

}

int	main(void)
{
	t_list	*node1;

	node1 = ft_lstnew("deneme");
	ft_lstdelone(node1, del);
}
*/
