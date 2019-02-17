/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 20:46:59 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/17 00:41:33 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (needle[0] == '\0')
		return (((char*)haystack));
	while (haystack[i++] != '\0' && --len > 0)
	{
		j = 0;
		printf("outer\n");
		while (haystack[i + j] == needle[j] && --len > 0)
		{
			printf("inner\n");
			j++;
			if (needle[j] == '\0')
				return (&((char*)haystack)[i]);
		}
		i++;
	}
	return (NULL);
}

int		main(void)
{
	char *s1 = "first string here";
	char *s2 = "string";
		ft_strnstr(s1, s2, 25);
	return (0);
}
