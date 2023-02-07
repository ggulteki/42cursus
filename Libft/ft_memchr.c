/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:47:37 by ggulteki          #+#    #+#             */
/*   Updated: 2023/01/09 16:59:17 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*j;
	size_t			i;

	i = 0;
	j = (unsigned char *)s;
	while (i < n)
	{
		if (*j == (unsigned char)c)
			return ((unsigned char *)j);
		j++;
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
  char	*s1 = "deneme";
  char	c = 'n';

  printf("%s\n", ft_memchr(s1, c, 6));
}
*/
