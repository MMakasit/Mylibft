/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <mmaliwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:18:13 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/03/24 17:18:13 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(const char *s1, const char *set)
{
    char    *res;
    char    *str;
    int len;

    if (!s1 || !set)
    {
        return (NULL);
    }
    str = (char *)s1;
    while (*str)
    {
        if (ft_strchr(set, *str) == NULL)
        {
            break ;
        }
        str++;
    }
    len = ft_strlen(str);
    while (len)
    {
        if (ft_strchr(set, str[len - 1]) == NULL)
        {
            break;
        }
        len--;
    }
    res = malloc(len + 1);
    if (!res)
    {
        return (NULL);
    }
    ft_strlcpy(res, str, len + 1);
    return (res);
}