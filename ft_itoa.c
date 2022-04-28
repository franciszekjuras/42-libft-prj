/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuras <fjuras@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:07:34 by fjuras            #+#    #+#             */
/*   Updated: 2022/04/28 14:33:37 by fjuras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_absu(int n)
{
	if (n < 0)
		return (((unsigned int) -(n + 1)) + 1u);
	return ((unsigned int) n);
}

char	*ft_itoa(int n)
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
	return (ft_strdup(buf + i));
}
