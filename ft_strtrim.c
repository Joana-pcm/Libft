/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpatrici <jpatrici@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:39:08 by jpatrici          #+#    #+#             */
/*   Updated: 2024/10/24 16:24:22 by jpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		n;
	int		k;
	char	*trum;

	i = 0;
	k = -1;
	j = ft_strlen(s1) - 1;
	while (j > i && s1[++k] != '\0')
	{
		n = -1;
		while (set[++n] != '\0')
		{
			if (s1[i] == set[n])
				i++;
			if (s1[j] == set[n])
				j--;
		}
	}
	trum = ft_substr((char *)s1, i, ((j + 1) - i));
	if (!trum)
		return (NULL);
	return (trum);
}
/*
int		main()
{
	char	*str = "abbaababaaaaa";
	char	*set = "ab";
	char	*s = ft_strtrim(str, set);

	printf("%s\n", s);
}*/
