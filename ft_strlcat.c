/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 13:30:44 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/21 14:58:27 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t n;
	size_t dlen;

	i = 0;
	j = 0;
	if (!s2[i] || dstsize == 0)
	   return ((size_t)strlen(s1));
	while (s1[i] && dstsize-- > 0)
		i++;
	dlen = i - *s1;
	n = dstsize - dlen;
	while (s2[j])
	{
		if (n != 1)
		{
			s1[j + i] = s2[j];
			j++;
			n--;
		}
	}
//	if (dlen > dstsize)
		s1[j + i] = '\0';

//	if (dlen > dstsize)
//		return (dlen + i);
	return (j + i);
}
