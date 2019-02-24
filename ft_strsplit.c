/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:52:19 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/24 03:31:31 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

int	word_count(const char *s, char c)
{
	int wc;
	int i;

	i = 0;
	wc = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		wc++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (wc);
}

char **ft_strsplit(char const *s, char c)
{
	int	i = 0;
	int j = 0;;
	int wc;
	int spaces;
	char **arr;
	int k = 0;

	wc = 0;
	spaces = 0;

	if (!s)
		return (NULL);
	//find word count
	wc = word_count(s, c);
	//allocate memory for first dimension
	if (!(arr=(char**)malloc(sizeof(char*) * (wc + 1))))
		return (NULL);
	// iterate through each word, assign memory
	while (wc > j && s[i])
	{
		int word = 0;
		int start = 0;
		while (s[i] == c && s[i] != 0)
		{
			i++;
		}
		start = i;
		while (s[i] != c && s[i] != 0)
		{
			i++;
			word++;
		}
		if (!(arr[j]=(char*)malloc(sizeof(char) * (word + 1))))
			return (NULL);
		k = 0;
		while(word)
		{
			arr[j][k] = s[start];
			k++;
			start++;
			word--;
		}
 		arr[j++][k] = '\0';
	}
	arr[j] = 0;
	return (arr);
}
/*
int		main(void)
{
	char **arr;
	//printf("%i",word_count("***HEllo****World", '*'));
	arr = ft_strsplit("      split       this for   me  !       ", ' ');

	while (*arr != 0)
	{
		printf("%s" ,*arr);
		arr++;
	}
	return (0);
}
*/
