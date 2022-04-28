/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuras <fjuras@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:44:58 by fjuras            #+#    #+#             */
/*   Updated: 2022/04/28 14:58:52 by fjuras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static unsigned int	ft_absu(int n)
{
	if (n < 0)
		return (((unsigned int) -(n + 1)) + 1u);
	return ((unsigned int) n);
}

void	ft_putnbr_fd(int n, int fd)
{
	char			buf[20];
	unsigned int	un;
	int				i;

	un = ft_absu(n);
	i = 20 - 1;
	buf[i--] = 0;
	while (un != 0)
	{
		buf[i--] = '0' + un % 10;
		un /= 10;
	}
	if (n == 0)
		buf[i--] = '0';
	else if (n < 0)
		buf[i--] = '-';
	i++;
	ft_putstr_fd(buf + i, fd);
}
