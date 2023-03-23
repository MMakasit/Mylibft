/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <mmaliwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 01:15:47 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/03/24 01:15:47 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    char    *arr;

    if (nmemb >= SIZE_MAX && size >= SIZE_MAX)
    {
        return (NULL);
    }
    arr = malloc(nmemb * size);
    if (!arr)
    {
        return (NULL);
    }
    ft_bzero(arr, nmemb * size);
    return (arr);
}