/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 10:27:09 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/19 21:30:59 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*temp;

	i = 0;
	if (!(temp = (char*)malloc(sizeof(size_t) * (size + 1))))
		return (NULL);
	if (size > 0)
	{
		while (size + 1 > i)
		{
			temp[i++] = 0;
		}
	}
	else
		temp[0] = 0;
	return (temp);
}
