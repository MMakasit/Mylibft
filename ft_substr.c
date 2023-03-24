/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <mmaliwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:12:10 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/03/24 16:12:10 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char    *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t  s_len;
    char    *res;

    if (!s)
    {
        return (NULL);
    }
    s_len = ft_strlen(s);
    if (len >= s_len - start)
    {
        len = s_len - start;
    }
    if (start > s_len)
    {
        start = s_len;
        len = 0;
    }
    res = malloc ((len + 1) * sizeof(char));
    if (!res)
    {
        return (NULL);
    }
    ft_strlcpy(res, s + start, len + 1);
    return (res);
}