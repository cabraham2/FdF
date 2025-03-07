/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:52:46 by cabraham          #+#    #+#             */
/*   Updated: 2025/03/07 17:05:01 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printf_char(t_struct *data)
{
	int	c;

	c = data->var.c;
	ft_putchar_fd(c, 1);
	ft_data_len(data, 1);
}

void	ft_printf_string(t_struct *data)
{
	char	*str;

	str = data->var.s;
	ft_putstr_fd(str, 1);
	ft_data_len(data, ft_strlen(str));
}

void	ft_printf_pointer(t_struct *data)
{
	void	*ptr;
	int		len;

	ptr = data->var.p;
	len = ft_pointer_fd((unsigned long long)ptr, "0123456789abcdef");
	ft_data_len(data, len);
}

void	ft_printf_int(t_struct *data)
{
	int	nb;
	int	len;

	nb = data->var.i;
	len = ft_putnum_fd(nb, 1);
	ft_data_len(data, len);
}

void	ft_printf_percentage(t_struct *data)
{
	ft_putchar_fd('%', 1);
	ft_data_len(data, 1);
}
