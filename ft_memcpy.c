/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebesnoin <ebesnoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:36:51 by ebesnoin          #+#    #+#             */
/*   Updated: 2024/04/18 16:16:32 by ebesnoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dst;
	const char	*origin;
	size_t		i;

	dst = dest;
	origin = src;
	i = 0;
	while (i < n)
	{
		dst[i] = origin[i];
		i++;
	}
	return (dest);
}