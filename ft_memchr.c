/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebesnoin <ebesnoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:22:55 by ebesnoin          #+#    #+#             */
/*   Updated: 2024/04/18 15:08:09 by ebesnoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *search;
    unsigned char       goal;
    size_t              i;

    search = s;
    goal = c;
    i = 0;
    while (i < n && search[i] != goal)
        i++;
    if (i == n)
        return (NULL);
    else
        return (&search[i]);
}