/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:45:18 by ggulteki          #+#    #+#             */
/*   Updated: 2023/02/02 17:43:03 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int x)
{
	if (x >= 32 && x <= 126)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char fortest00 = 'G';
	char fortest01 = '	';

	printf("%d\n", ft_isprint(fortest00));
	printf("%d\n", ft_isprint(fortest01));
}
*/
