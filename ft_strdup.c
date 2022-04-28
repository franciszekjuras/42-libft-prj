/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuras <fjuras@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:55:08 by fjuras            #+#    #+#             */
/*   Updated: 2022/04/28 14:48:03 by fjuras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	str_size;
	char	*dup;

	str_size = ft_strlen(str) + 1;
	dup = malloc(str_size);
	if (dup == 0)
		return (0);
	ft_memcpy(dup, str, str_size);
	return (dup);
}
