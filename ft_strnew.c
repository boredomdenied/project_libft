/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 10:27:09 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/15 14:58:43 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = (char*)malloc(sizeof(size_t) * (size + 1));
	if (size > 0 && temp != NULL)
	{
		while (size > i)
		{
			temp[i++] = '\0';
		}
		return (temp);
	}
	return (NULL);
}
