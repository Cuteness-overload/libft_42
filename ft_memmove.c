/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebesnoin <ebesnoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:48:24 by ebesnoin          #+#    #+#             */
/*   Updated: 2024/04/18 15:08:06 by ebesnoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    const char  *origin;
    char        tmp[n];
    char        *dst;
    size_t      i;

    dst = dest;
    origin = src;
    i = 0;
    while (i < n)
    {
        tmp[i] = origin[i];
        i++;
    }
    i = 0;
    while (i < n)
    {
        dst[i] = tmp[i];
        i++;
    }
    return (dest);
}