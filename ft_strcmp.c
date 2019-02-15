/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 15:46:17 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/15 14:43:53 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int p;

	p = 0;
	while (s1[p] == s2[p])
	{
		if (s1[p] == '\0')
			return (0);
		p++;
	}
	return (((unsigned char)s1[p]) - ((unsigned char)s2[p]));
}
