/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpatrici <jpatrici@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:48:04 by jpatrici          #+#    #+#             */
/*   Updated: 2024/10/25 17:11:45 by jpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(char *s, char c)
{
	int	i;
	int	count;

	i = -1;
	if (s[0] != c)
		count = 1;
	else
		count = 0;
	while (s[++i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
	}
	return (count);
}
/*
void	bfree(char	*s)
{
	free(s);
	return (NULL);
}*/

char	**ft_split(char const *s, char c)
{
	char	**ss;
	size_t	i;
	int		j;
	int		n;

	i = 0;
	j = -1;
	n = -1;
	ss = malloc((8 * count((char *)s, c)) + 1);
	if (!ss || !s)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && n < 0)
			n = i;
		else if ((s[i] == c || i == ft_strlen(s)) && n >= 0)
		{
			ss[++j] = ft_substr(s, n, (i - n));
			n = -1;
		}
		i++;
	}
	ss[++j] = 0;
	return (ss);
}
/*
int	main()
{
	char	s [] = "hello world";
	char	sep = 'l';
	int		i = 0;
	char	**s2 = ft_split(s, sep);
	if (s2[i] == 0)
		printf("fucked up\n");
	while (s2[i] != 0)
	{
		printf("%s\n", s2[i]);
		i++;
	}
}*/
