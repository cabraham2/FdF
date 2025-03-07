/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:52:46 by cabraham          #+#    #+#             */
/*   Updated: 2025/03/07 17:01:13 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	if (!size)
		return (i);
	while (--size && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (i);
}

/*int main(){
	char s1[10];
	const char *s2="Jesuisla";
	printf("%li\n", ft_strlcpy(s1, s2, 5));
	printf("%s\n", s1);
	return 0;
}*/
