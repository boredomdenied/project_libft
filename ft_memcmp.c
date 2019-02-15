/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 07:21:52 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/14 15:33:59 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && (((unsigned char*)s1)[i] == ((unsigned char*)s2)[i]))
	{
		i++;
	}
	if (i == n)
		return (0);
	else
		return (((unsigned char*)s1)[i] - ((unsigned*)s2)[i]);
}
