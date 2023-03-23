/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <mmaliwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 00:27:56 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/03/24 00:27:56 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char    *ptr;
    char    chr;

    ptr = (char *)s;
    chr = (char)c;
    while (*ptr != chr)
    {
        if (*ptr++ == 0)
        {
            return (NULL);
        }
    }
    return (ptr);
}