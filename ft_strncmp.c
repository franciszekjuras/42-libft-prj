/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuras <fjuras@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:02:25 by fjuras            #+#    #+#             */
/*   Updated: 2022/04/28 14:51:21 by fjuras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return (0);
	while (i + 1 < len && s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return ((int)(unsigned char) s1[i] - (int)(unsigned char) s2[i]);
}
