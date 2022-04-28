/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuras <fjuras@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:38:55 by fjuras            #+#    #+#             */
/*   Updated: 2022/04/28 14:26:35 by fjuras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>
#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*mem;

	if (size != 0 && SIZE_MAX / size < number)
		return (0);
	mem = malloc(number * size);
	if (mem == 0)
		return (0);
	ft_bzero(mem, number * size);
	return (mem);
}
