/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggulteki <ggulteki@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:54:43 by ggulteki          #+#    #+#             */
/*   Updated: 2023/01/31 18:57:38 by ggulteki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1)
		return (NULL);
	str = (char *)ft_calloc(ft_strlen(s1) + (ft_strlen(s2) + 1), sizeof(*s1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, ft_strlen(s1));
	ft_strlcat(str, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (str);
}
/*
int	main(void)
{
	char	*s1 = "deneme";
	char	*s2 = "DENEME";

	printf("%s\n", ft_strjoin(s1, s2));
}
*/
