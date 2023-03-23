/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <mmaliwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 00:32:18 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/03/24 00:32:18 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    unsigned int len;

    len = ft_strlen(s);
    if (c == 0)
    {
        return ((char *)s + len);
    }
    while (len)
    {
        if (s[--len] == (char)c)
        {
            return ((char *)s + len);
        }
    }
    return (NULL);
}