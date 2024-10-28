/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:29:37 by jpatrici          #+#    #+#             */
/*   Updated: 2024/10/22 16:26:33 by jpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*h;

	i = 0;
	j = 0;
	h = (char *) haystack;
	if (needle[i] == '\0')
		return (h);
	while (h[i] != '\0' && len > 0)
	{
		while (h[i + j] == needle[j] && h[i + j] != '\0' && len > 0)
		{
			len--;
			j++;
		}
		if (needle[j] == '\0')
			return (&h[i]);
		j = 0;
		i++;
		len--;
	}
	return (0);
}
/*
int	main()
{
	char	str [] = "hello world";
	char	to_find [] = "lo a";
	char	*res = ft_strnstr(str, to_find, 8);
	printf("%s\n", res);
	res = strnstr(str, to_find, 8);
	printf("%s\n", res);
	return (0);
}*/