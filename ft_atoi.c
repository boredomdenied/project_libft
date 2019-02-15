/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 14:56:30 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/15 09:59:15 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		number;
	int		negative;

	i = 0;
	number = 0;
	negative = 1;
	while (str[i++] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				negative = -1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			number = (number * 10) + (str[i] - 48);
		else if (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || \
				str[i] == '\f' || str[i] == '\r' || str[i] == '+')
			;
		else if (str[i] == ' ')
			;
		else
			break ;
	}
	return (number * negative);
}
