/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <mmaliwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:53:25 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/04/19 14:53:25 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_splitlen(char const *s, char c)
{
    char    *str;
    int len;
    int flag;

    str = (char *)s;
    len = 0;
    flag = 0;
    while (*str)
    {
        if (*str != c && !flag)
        {
            len++;
            flag = 1;
        }
        else if (*str == c && flag)
            flag = 0;
        str++;
    }
    return (len);
}

static char **ft_free_arr(char **s)
{
    int i;

    i = 0;
    while (s[i])
    {
        free(s[i]);
        i++;
    }
    free(s);
    return (NULL);
}

static char **ft_put_table(char **res, char *str, char c, int len)
{
    int a;
    int b;

    a = 0;
    b = 0;
    while (a < len)
    {
        if (*str && *str != c)
            b++;
        else if (b != 0)
        {
            res[a] = malloc((b + 1) * sizeof(char));
            if (!res[a])
                return (ft_free_arr(res));
            ft_memcpy(res[a], str - b, b);
            res[a][b] ='\0';
            a++;
            b = 0;
        }
        str++;
    }
    return (res);
}

char **ft_split(char const *s, char c)
{
    char    **res;
    char    *str;
    int len;

    if (!s)
        return (NULL);
    str = (char *)s;
    len = ft_splitlen(s, c);
    res = malloc((len + 1) * sizeof(char *));
    if (!res)
        return (NULL);
        res[len] = NULL;
        return (ft_put_table(res, str, c, len));
}