/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebesnoin <ebesnoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:11:08 by ebesnoin          #+#    #+#             */
/*   Updated: 2024/04/18 20:49:49 by ebesnoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	atol(const char *nptr)
{
	size_t	i;
	long	num;
	int		sign;

	i = 0;
	num = 0;
	sign = 1;
	while (ft_isspace((unsigned char)nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit((unsigned char)nptr[i]))
	{
		num *= 10;
		num += (nptr[i] - '0') * sign;
		i++;
	}
	return (num);
}
