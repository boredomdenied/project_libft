/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 21:18:11 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/16 21:18:15 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*temp;

	i = 0;
	while (s[i])
		i++;
	temp = (char*)malloc(sizeof(char) * i + 1);
	i = 0;
	while (s[i])
	{
		temp[i] = f(s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
