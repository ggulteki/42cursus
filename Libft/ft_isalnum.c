/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:13:20 by ggulteki          #+#    #+#             */
/*   Updated: 2023/02/02 17:43:50 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char fortest00 = 'G';
	char fortest01 = '3';
	char fortest02 = ' ';

	printf("%d\n", ft_isalnum(fortest00));
	printf("%d\n", ft_isalnum(fortest01));
	printf("%d\n", ft_isalnum(fortest02));
}
*/
