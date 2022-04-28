/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuras <fjuras@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:34:32 by fjuras            #+#    #+#             */
/*   Updated: 2022/04/28 14:25:44 by fjuras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*mem;
	size_t			i;

	uc = (unsigned char) c;
	mem = (unsigned char *) b;
	i = 0;
	while (i < n)
	{
		mem[i] = uc;
		i += 1;
	}
	return (b);
}
