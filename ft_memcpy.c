/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <mmaliwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:46:50 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/03/23 17:46:50 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *destptr;
    unsigned char *ptr;

    if (!dest && !src)
    {
        return (NULL);
    }
    destptr = dest;
    ptr = (unsigned char *)src;
    while (n-- > 0)
    {
        *destptr++ = *ptr++;
    }
    return (dest);
}