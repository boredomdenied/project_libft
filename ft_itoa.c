/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 11:04:48 by exam              #+#    #+#             */
/*   Updated: 2019/02/19 21:29:51 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		length(nbr)
{
	int size;

	if (nbr == 0)
		return (1);
	size = 0;
	if (nbr == -2147483648)
	{
		nbr /= 10;
		size++;
	}
	if (nbr < 0)
		nbr *= -1;
	while (nbr > 0)
	{
		nbr /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int neg;
	int max;
	int size;
	char *arr;

	size = length(n);
	neg = 0;
	max = 0;
	if (n == -2147483648)
	{
		max = 1;
		n = -147483648;
	}
	if (n < 0)
	{
		neg = 1;	
		n *= -1;
	}
	if (!(arr = (char*)malloc(sizeof(char) * size + 1 + neg + max)))
		return (NULL);
	if (neg)
		arr[0] = '-';
	if (max)
		arr[1] = '2';
	if (n == 0)
		arr[size + neg - 1] = '0';
	arr[size + neg] = '\0';
	while(n > 0)
	{
		arr[size + neg - 1] = (n % 10) + '0';
		n /= 10;
		size--;
	}
	return (arr);
}
