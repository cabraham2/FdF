/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:52:46 by cabraham          #+#    #+#             */
/*   Updated: 2025/03/07 17:05:04 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_hex_low(unsigned int nb)
{
	char	*base;
	int		len;

	base = "0123456789abcdef";
	len = 0;
	if (nb >= 16)
		len += ft_putnbr_hex_low(nb / 16);
	ft_putchar_fd(base[nb % 16], 1);
	len++;
	return (len);
}

int	ft_putnbr_hex_up(unsigned int nb)
{
	char	*base;
	int		len;

	base = "0123456789ABCDEF";
	len = 0;
	if (nb >= 16)
		len += ft_putnbr_hex_up(nb / 16);
	ft_putchar_fd(base[nb % 16], 1);
	len ++;
	return (len);
}
