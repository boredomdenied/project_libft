/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 13:30:44 by bchapman          #+#    #+#             */
/*   Updated: 2019/03/15 11:42:24 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (s1[len] && len < size)
		len += 1;
	i = len;
	while (s2[len - i] && len + 1 < size)
	{
		s1[len] = s2[len - i];
		len += 1;
	}
	if (i < size)
		s1[len] = '\0';
	return (i + ft_strlen(s2));
}
