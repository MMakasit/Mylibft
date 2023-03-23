/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <mmaliwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:22:36 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/03/23 19:22:36 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *from;
    unsigned char *to;

    from = (unsigned char *) src;
    to = (unsigned char *) dest;

    if (from == to || n == 0)
    {
        return (dest);
    }
    if(to > from)
    {
        while (n-- > 0)
        {
            to[n] = from[n];
        }
        return (dest, src, n);
    }
    ft_memcpy(dest, src, n);
    return (dest);
}