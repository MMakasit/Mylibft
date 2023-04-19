/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <mmaliwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:12:42 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/04/19 16:12:42 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_num_length(int n)
{
    int len;

    len = 1;
    if (n < 0 && len++)
        n = -n;
    while (n > 9 && len++)
        n /= 10;
        return (len);
}

static void ft_setchr(char *str, int n, int len)
{
    int stop;

    stop = 0;
    if (n < 0)
    {
        n = -n;
        stop = 1;
        str[0] = '-';
    }
    while (len > stop)
    {
        str[--len] = '0' + (n % 10);
        n /= 10;
    }
}

char *ft_itoa(int n)
{
    char    *res;
    int len;

    if (n == -2147483648)
    {
        res = malloc(12 * sizeof(char));
        if(!res)
            return (NULL);
        res[11] = '\0';
        ft_memcpy(res, "-2147483648", sizeof(char) * 11);
        return (res);
    }
    len = ft_num_length(n);
    res = malloc((len + 1) * sizeof(char));
    if (!res)
        return (NULL);
    res[len] = '\0';
    ft_setchr(res, n, len);
    return (res);
}