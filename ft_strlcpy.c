/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <mmaliwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:28:56 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/03/23 19:28:56 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t len;

    len = ft_strlen(src);
    if (len + 1 < size)
    {
        ft_memcpy(dst, src, len + 1);
    }
    else if (size != 0)
    {
        ft_memcpy(dst, src, size - 1);
        dst[size - 1] =  '\0';
    }
    return (len);
}