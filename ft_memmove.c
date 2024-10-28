/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpatrici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:33:55 by jpatrici          #+#    #+#             */
/*   Updated: 2024/10/21 14:10:33 by jpatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	i = -1;
	ptr = (unsigned char *)src;
	ptr2 = dest;
	while (ptr[++i] != '\0' && n > 0)
	{
		ptr2[i] = ptr[i];
		n--;
	}
	return (dest);
}
/*
int	main(void)
{
	char	d[21];
	char	s[] = "hello world";
	
	//bzero(d, 21);
//	memmove(d, s, 5);
//	printf("\nOriginal: %s\n", d);
	//bzero(d, 21);
	ft_memmove(d, s, 5);
	printf("\nMine: %s\n", d);
}*/