/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 18:30:19 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/14 23:22:42 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (src == NULL || dst == NULL)
		return (NULL);
	if (dst > src)
	{
		i = len;
		while (i-- > 0)
			((unsigned char*)dst)[i - 1] = ((unsigned char*)src)[i - 1];
	}
	else if (dst < src)
		ft_memcpy(dst, src, len);
	return (dst);
}
