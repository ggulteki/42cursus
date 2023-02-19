/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:08:22 by ggulteki          #+#    #+#             */
/*   Updated: 2022/12/28 16:06:23 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c -= 32);
	}
	else
	{
		return (c);
	}
}
/*
int main(void)
{
	char	s1[] = "gokberk";
	size_t  i = 0;

	printf("before: %s\n", s1);

	while(s1[i] != '\0')
	{
		s1[i] = (char)ft_upper((int)s1[i]);
		i++;
	}

	printf("after: %s\n", s1);
}
*/
