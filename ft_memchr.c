/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuras <fjuras@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:34:32 by fjuras            #+#    #+#             */
/*   Updated: 2022/04/28 14:34:14 by fjuras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	unsigned char		*p;
	size_t				i;
	unsigned char		uc;

	p = (unsigned char *) b;
	uc = (unsigned char) c;
	i = 0;
	while (i < len)
	{
		if (p[i] == uc)
			return (p + i);
		i++;
	}
	return (0);
}
