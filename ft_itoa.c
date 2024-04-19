/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebesnoin <ebesnoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:31:18 by ebesnoin          #+#    #+#             */
/*   Updated: 2024/04/19 15:11:42 by ebesnoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_slen(int n)
{
	size_t	slen;
	int		i;

	slen = 0;
	i = n;
	if (n < 0)
		slen++;
	while (i != 0)
	{
		slen++;
		i /= 10;
	}
}

char	*ft_itoa(int n)
{
	size_t	slen;
	char	*str;

	slen = get_slen(n);
	str = malloc(sizeof(char) * (slen + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		str[slen - 1] = n % 10;
		n /= 10;
	}
	str[slen] = '\0';
	return (str);
}
