/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:18:15 by ggulteki          #+#    #+#             */
/*   Updated: 2023/02/02 19:49:38 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int x)
{
	if (x >= 0 && x <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char fortest00 = 'G';
	int fortest01 = 128;

	printf("%d\n", ft_isascii(fortest00));
	printf("%d\n", ft_isascii(fortest01));
}
*/
