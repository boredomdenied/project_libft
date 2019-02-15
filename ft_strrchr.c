/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 06:48:17 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/14 15:28:40 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (((unsigned char*)s)[i] != '\0')
		i++;
	while (((unsigned char*)s)[i] != ((unsigned char)c))
		i--;
	if (((unsigned char*)s)[i] == ((unsigned char)c))
		return (&((char*)s)[i]);
	return (NULL);
}
