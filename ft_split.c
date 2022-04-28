/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuras <fjuras@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:15:40 by fjuras            #+#    #+#             */
/*   Updated: 2022/04/28 14:43:50 by fjuras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_strndup(const char *str, size_t len)
{
	char	*dup;

	dup = malloc(len + 1);
	if (dup == 0)
		return (0);
	ft_memcpy(dup, str, len);
	dup[len] = '\0';
	return (dup);
}

static void	*ft_freeparr(void **arr)
{
	int	i;

	i = 0;
	while (arr[i] != 0)
		free(arr[i++]);
	free(arr);
	return (0);
}

static int	next_word(char **beg, char **end, char delim)
{
	char	*pos;

	pos = *end;
	if (delim != 0)
		while (*pos == delim)
			pos += 1;
	if (*pos == 0)
		return (0);
	*beg = pos;
	while (*pos != delim && *pos != 0)
		pos += 1;
	*end = pos;
	return (1);
}

char	**ft_split(char const *str, char delim)
{
	char	*beg;
	char	*end;
	int		count;
	char	**words;

	end = (char *) str;
	count = 0;
	while (next_word(&beg, &end, delim))
		count += 1;
	words = malloc((count + 1) * sizeof(char *));
	if (words == 0)
		return (0);
	end = (char *) str;
	count = 0;
	while (next_word(&beg, &end, delim))
	{
		words[count] = ft_strndup(beg, end - beg);
		if (words[count] == 0)
			return ((char **) ft_freeparr((void **) words));
		count += 1;
	}
	words[count] = 0;
	return (words);
}
