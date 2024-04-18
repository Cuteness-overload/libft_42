/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebesnoin <ebesnoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:40:42 by ebesnoin          #+#    #+#             */
/*   Updated: 2024/04/18 15:08:08 by ebesnoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *str1;
    const unsigned char *str2;
    size_t              i;

    i = 0;
    str1 = s1;
    str2 = s2;
    if (n == 0)
        return (0);
    while (i < n && str1[i] == str2[i])
        i++;
    return (str1[i] - str2[i]);
}