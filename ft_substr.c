/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpatrici <jpatrici@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:25:12 by jpatrici          #+#    #+#             */
/*   Updated: 2024/10/23 16:46:45 by jpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	while (s[start] != '\0' && len > 0)
	{
		str[i++] = s[start++];
		len--;
	}
	str[++i] = '\0';
	return (str);
}
/*
int		main()
{
	char	*str = "Bonjour comment ca va?";
	char	*s = ft_substr(str, 5, 8);

	printf("%s\n", s);
}*/
