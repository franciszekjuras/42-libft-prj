/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuras <fjuras@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:34:32 by fjuras            #+#    #+#             */
/*   Updated: 2022/04/28 14:34:11 by fjuras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	const unsigned char	*c1;
	const unsigned char	*c2;
	size_t				i;

	c1 = (const unsigned char *) b1;
	c2 = (const unsigned char *) b2;
	i = 0;
	while (i < len)
	{
		if (c1[i] != c2[i])
			return ((int) c1[i] - (int) c2[i]);
		i++;
	}
	return (0);
}
