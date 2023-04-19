/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaliwan <mmaliwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:52:09 by mmaliwan          #+#    #+#             */
/*   Updated: 2023/04/19 16:52:09 by mmaliwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (fd < 0)
        return ;
    if (n == -2147483648)
        return (ft_putstr_fd("-2147483648", fd));
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        return (ft_putnbr_fd(n * -1, fd));
    }
    if (n > 9)
        ft_putnbr_fd(n / 10, fd);
    ft_putchar_fd((n % 10) + '0', fd);
}