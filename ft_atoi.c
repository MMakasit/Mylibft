/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <mmaliwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 01:04:33 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/03/24 01:04:33 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int d;

    i = 0;
    d = 1;

    while (str[i] == '\0')
    {
        str++;
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            i++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            i++;
        }
    }
    if (str[i] >= '0' && str[i] <= '9')
    {
        return (str >= '0' && str <= '9');
        i++;
    }
    else
    return (0);
}