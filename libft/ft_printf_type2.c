/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_type2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:52:46 by cabraham          #+#    #+#             */
/*   Updated: 2025/03/07 17:05:00 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printf_uint(t_struct *data)
{
	unsigned int	nb;
	int				len;

	nb = data->var.u;
	len = ft_putunum_fd(nb, 1);
	ft_data_len(data, len);
}

void	ft_printf_hex_low(t_struct *data)
{
	unsigned int	nb;
	int				len;

	nb = data->var.x;
	len = ft_putnbr_hex_low(nb);
	ft_data_len(data, len);
}

void	ft_printf_hex_up(t_struct *data)
{
	unsigned int	nb;
	int				len;

	nb = data->var.x;
	len = ft_putnbr_hex_up(nb);
	ft_data_len(data, len);
}
