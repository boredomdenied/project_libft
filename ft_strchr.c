/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 06:42:30 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/14 21:20:24 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (((unsigned char*)s)[i] != ((unsigned char)c))
		i++;
	if (((unsigned char*)s)[i] == ((unsigned char)c))
	{
		return (&((char*)s)[i]);
	}
	return (NULL);
}
