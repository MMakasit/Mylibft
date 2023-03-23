/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <mmaliwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:32:59 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/03/23 19:32:59 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    const char  *odst;
    const char  *osrc;
    size_t  n;
    size_t  dlen;

    odst = dst;
    osrc = src;
    n = size;
    while (n-- > 0 && *dst)
    {
        dst++;
    }
    dlen = dst - odst;
    n = size - dlen;
    if (n-- == 0)
    {
        return (dlen + ft_strlen(src));
    }
    while (*src)
    {
        if (n > 0)
        {
            *dst++ = *src;
            n--;
        }
        src++;
    }
    *dst = '\0';
    return (dlen + (src - osrc));
}