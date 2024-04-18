/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebesnoin <ebesnoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:47:30 by ebesnoin          #+#    #+#             */
/*   Updated: 2024/04/18 17:31:02 by ebesnoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] && n > 0)
	{
		i++;
		n--;
	}
	while (src[j] && n-- > 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (n == 1 || src[j] != '\0')
		dest[i + j] = '\0';
	return (ft_strlen(src) + ft_strlen(dest));
}
