/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:26:27 by ggulteki          #+#    #+#             */
/*   Updated: 2023/02/02 17:43:34 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int x)
{
	if (x >= 48 && x <= 57)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char fortest00 = '3';
	char fortest01 = 'G';

	printf("%d\n", ft_isdigit(fortest00));
	printf("%d\n", ft_isdigit(fortest01));
}
*/
