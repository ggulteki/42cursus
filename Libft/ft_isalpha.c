/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:54:01 by ggulteki          #+#    #+#             */
/*   Updated: 2023/02/02 17:43:21 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int x)
{
	if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char fortest00 = 'G';
	char fortest01 = '3';

	printf("%d\n", ft_isalpha(fortest00));
	printf("%d\n", ft_isalpha(fortest01));
}
*/
