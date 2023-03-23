/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <mmaliwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:38:31 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/03/23 17:38:31 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *str, int c, size_t n)
{
    unsigned char *ptr;

    ptr = str;
    ft_bzero(ptr,n);
    while (n--)
    {
        *ptr++ = (unsigned char)c;
    }
    return (str);
}