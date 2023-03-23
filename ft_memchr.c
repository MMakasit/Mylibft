/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <mmaliwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 00:42:30 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/03/24 00:42:30 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *ptr;

    ptr = (unsigned char *)s;
    while (n-- > 0)
    {
        if (*ptr == (unsigned char)c)
        {
            return (ptr);
        }
        ptr++;
    }
    return (NULL); 
}