/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 18:23:39 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/17 00:36:45 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_src;
	unsigned char	*new_dst;
	unsigned char	new_c;

	new_src = (unsigned char*)src;
	new_dst = (unsigned char*)dst;
	new_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (new_src[i] == (new_c))
		{
			i++;
			return (&dst[i]);
		}
		else
			(new_dst[i] = new_src[i]);
		i++;
	}
	return (NULL);
}
