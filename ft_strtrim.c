/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuras <fjuras@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:15:40 by fjuras            #+#    #+#             */
/*   Updated: 2022/04/28 14:49:57 by fjuras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_isinset(int c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(str);
	while (ft_isinset(str[i], set))
		i++;
	while (j > i && ft_isinset(str[j - 1], set))
		j--;
	return (ft_substr(str, i, j - i));
}
