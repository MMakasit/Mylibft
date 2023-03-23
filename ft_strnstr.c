/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <mmaliwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 00:53:26 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/03/24 00:53:26 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    char    *a;
    char    *b;
    size_t  b_len;

    a = (char *)big;
    b = (char *)little;
    if (a == NULL && len == 0)
    {
        return (NULL);
    }
    if (ft_memcmp(b, (char *)"", 1))
    {
        return (a);
    }
    b_len = ft_strlen(b);
    if (ft_memcmp(a, (char *)"", 1))
    {
        while (len-- && *a)
        {
            if (*a == *b && len >= b_len - 1)
            {
                if (ft_strncmp(a, b, b_len) == 0)
                {
                    return (a);
                }
            }
            a++;
        }
    }
    return (NULL);
}