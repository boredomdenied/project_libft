/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 16:06:29 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/14 15:41:15 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int p;

	p = 0;
	while (s1[p] == s2[p])
	{
		if (s1[p] == '\0' || n == 1)
			return (0);
		p++;
		n--;
	}
	return (s1[p] - s2[p]);
}
