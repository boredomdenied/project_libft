/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 20:46:59 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/19 21:32:06 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	size_t	n;

	i = 0;
	if (needle[i] == '\0')
		return (((char*)haystack));
	n = ft_strlen(needle);
	while (haystack[i] != '\0' && len-- >= n)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (&((char*)haystack)[i]);
		}
		i++;
	}
	return (NULL);
}
