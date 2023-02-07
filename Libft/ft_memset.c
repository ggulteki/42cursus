/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:23:29 by ggulteki          #+#    #+#             */
/*   Updated: 2022/12/28 16:06:00 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*i;

	i = b;
	while (len > 0)
	{
		*i = c;
		len--;
		i++;
	}
	return (b);
}
/*
int main(void)
{
  char  s1[] = "deneme";
  char c = 'a';
  size_t len = 2;

  ft_memset(s1, c, len);
}
*/
