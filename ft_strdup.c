/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <mmaliwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 01:19:10 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/03/24 01:19:10 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    int len;
    char    *str;

    len = ft_strlen(s);
    str = malloc((len + 1) * sizeof(char));
    if (!str)
    {
        return (NULL);
    }
    str[len] = '\0';
    ft_memcpy(str, s, len);
    return (str);
}