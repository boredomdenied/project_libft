/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 19:37:49 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/21 15:44:52 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*trim;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
		i++;
	i--;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
		i--;
	i++;
	while (s[j] && (s[j] == '\t' || s[j] == '\n' || s[j] == ' '))
		j++;
	if (i == 0)
		i = j;
	if (!(trim = (char*)malloc(sizeof(char) * (i - j + 1))))
		return (NULL);
	while (j < i)
		trim[k++] = s[j++];
	trim[k] = '\0';
	return (trim);
}
