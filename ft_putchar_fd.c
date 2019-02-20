/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 16:35:44 by bchapman          #+#    #+#             */
/*   Updated: 2019/02/19 21:30:22 by bchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd == -1)
	{
		write(1, "open() failed\n", 15);
	}
	write(fd, &c, 1);
}
