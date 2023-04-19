/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <mmaliwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:27:59 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/04/19 16:27:59 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *str;
    unsigned    indx;

    if (!s || !f)
        return (NULL);
    str = malloc(ft_strlen(s) + 1);
    if (!str)
        return (NULL);
        indx = 0;
        while (s[indx])
        {
            str[indx] = f(indx, s[indx]);
            indx++;
        }
        str[indx] = '\0';
        return (str);
}