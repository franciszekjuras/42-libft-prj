/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuras <fjuras@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:55:08 by fjuras            #+#    #+#             */
/*   Updated: 2022/04/28 14:54:13 by fjuras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (i < maxlen && s[i] != '\0')
		i++;
	return (i);
}

static char	*ft_strndup(const char *str, size_t len)
{
	char	*dup;

	len = ft_strnlen(str, len);
	dup = malloc(len + 1);
	if (dup == 0)
		return (0);
	ft_memcpy(dup, str, len);
	dup[len] = '\0';
	return (dup);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	return (ft_strndup(s + ft_strnlen(s, start), len));
}
