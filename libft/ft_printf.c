/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:52:46 by cabraham          #+#    #+#             */
/*   Updated: 2025/03/07 17:04:56 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *__format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, __format);
	len = ft_printf_parsing(__format, &args);
	va_end(args);
	return (len);
}
