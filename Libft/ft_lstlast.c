/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:54:19 by ggulteki          #+#    #+#             */
/*   Updated: 2023/01/25 20:21:43 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst -> next)
			lst = lst -> next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	char	*output;

	node1 = ft_lstnew("deneme");
	node2 = ft_lstnew("DENEME");
	node1 -> next = node2;
	output = ft_lstlast(node1)->content;
	printf("%s\n", output);
}
*/
