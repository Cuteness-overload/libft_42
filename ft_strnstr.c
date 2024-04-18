/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebesnoin <ebesnoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:57:46 by ebesnoin          #+#    #+#             */
/*   Updated: 2024/04/18 19:16:48 by ebesnoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	slen;
	size_t	i;

	slen = ft_strlen(little);
	i = 0;
	if (little[0] == '\0')
		return (big);
	while (big[i] && (i + slen) <= len)
	{
		if (big[i] == little[0])
		{
			if (!ft_strncmp(&big[i], little, slen))
				return (&big[i]);
		}
		i++;
	}
	return (NULL);
}
