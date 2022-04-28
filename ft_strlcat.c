/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuras <fjuras@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:21:13 by fjuras            #+#    #+#             */
/*   Updated: 2022/04/28 15:00:09 by fjuras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (i < maxlen && s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;

	dst_len = ft_strnlen(dst, dstsize);
	if (dst_len >= dstsize)
		return (dst_len + ft_strlen(src));
	dst += dst_len;
	dstsize -= dst_len;
	return (dst_len + ft_strlcpy(dst, src, dstsize));
}
