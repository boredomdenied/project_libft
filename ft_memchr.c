/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 18:45:33 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/19 22:09:32 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;

	i = 0;
	while (n > 0 && ((unsigned char*)s)[i] != ((unsigned char)c))
	{
		n--;
		i++;
	}
	if (((unsigned char*)s)[i] == c)
		return ((&(unsigned char*)s)[i]);
	return (NULL);
}
