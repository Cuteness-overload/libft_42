/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebesnoin <ebesnoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:53:40 by ebesnoin          #+#    #+#             */
/*   Updated: 2024/04/18 16:16:29 by ebesnoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
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
		if (dst[i - 1] == (unsigned char)c)
			return (&dst[i]);
	}
	return (NULL);
}
