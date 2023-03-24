/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <mmaliwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:46:20 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/03/24 16:46:20 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int s1len;
    int s2len;
    char    *res;

    if (!s1 || !s2)
    {
        return (NULL);
    }
    s1len = ft_strlen(s1);
    s2len = ft_strlen(s2);
    res = malloc(s1len + s2len + 1);
    if (!res)
    {
        return (NULL);
    }
    res[s1len + s2len] = '\0';
    while (s2len-- > 0)
    {
        res[s1len + s2len] = s2[s2len];
    }
    while (s1len-- > 0)
    {
        res[s1len] = s1[s1len];
    }
    return (res);
}