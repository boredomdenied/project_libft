/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 09:28:04 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/15 10:54:06 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	size_t i;
	char*	temp;

	i = 0;
	temp = (void*)malloc(sizeof(size_t) *  (size + 1));
	if (size > 0 && temp != NULL)
	{
		while (size > i)
		{
			temp[i++] = '0';
		}
		return (temp);
	}
	return (NULL);
}
