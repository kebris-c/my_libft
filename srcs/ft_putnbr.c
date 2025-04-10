/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebris-c <kebris-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 16:01:06 by kebris-c          #+#    #+#             */
/*   Updated: 2025/04/06 16:19:15 by kebris-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr(int nbr)
{
    if (nbr == -2147483648)
    {
        ft_putstr("-2147483648", 1);
        return;
    }
    else if (nbr < 0)
    {
        ft_putchar('-', 1);
        ft_putnbr(-nbr);
        return;
    }
    else
    {
        if (nbr > 9)
            ft_putnbr(nbr / 10);
        ft_putchar(nbr % 10 + '0', 1);
    }
}
