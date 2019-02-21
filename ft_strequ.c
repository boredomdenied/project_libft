/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 13:39:18 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/21 15:45:32 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	while (s1 && s2)
		if (!ft_strcmp(s1, s2))
			return (1);
	return (0);
}
