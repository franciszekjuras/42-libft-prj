/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuras <fjuras@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:02:25 by fjuras            #+#    #+#             */
/*   Updated: 2022/04/28 14:46:24 by fjuras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static void	*ft_memrchr(const void *b, int c, size_t len)
{
	unsigned char		*p;
	size_t				i;
	unsigned char		uc;

	p = (unsigned char *) b;
	uc = (unsigned char) c;
	i = 0;
	while (i < len)
	{
		if (p[len - i - 1] == uc)
			return (p + len - i - 1);
		i++;
	}
	return (0);
}

char	*ft_strrchr(const char *s, int c)
{
	return (ft_memrchr(s, c, ft_strlen(s) + 1));
}
