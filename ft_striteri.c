/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <mmaliwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:36:12 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/04/19 16:36:12 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int    indx;

    if (!s || !f)
        return ; 
    indx = 0;
    while (s[indx])
    {
        f(indx, s + indx);
        indx++;
    }
}