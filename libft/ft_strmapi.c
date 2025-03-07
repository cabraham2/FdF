/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:52:46 by cabraham          #+#    #+#             */
/*   Updated: 2025/03/07 17:04:22 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;

	result = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!result)
		return (NULL);
	i = -1;
	while (s[++i])
		result[i] = (*f)(i, s[i]);
	result[i] = 0;
	return (result);
}
