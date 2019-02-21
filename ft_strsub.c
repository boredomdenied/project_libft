/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 15:02:17 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/21 15:45:16 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	if (!(sub = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (s[start] && len-- > 0)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
