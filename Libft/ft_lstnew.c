/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:04:47 by ggulteki          #+#    #+#             */
/*   Updated: 2023/01/25 19:34:16 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*dest;

	dest = (t_list *)malloc(sizeof(*dest));
	if (!(dest))
		return (NULL);
	dest->content = content;
	dest->next = NULL;
	return (dest);
}
/*
int	main(void)
{
	t_list	*node1;

	node1 = ft_lstnew("deneme");
	printf("%s\n", node1->content);
}
*/
