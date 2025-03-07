/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:52:46 by cabraham          #+#    #+#             */
/*   Updated: 2025/03/07 17:05:39 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t size)
{
	while (size--)
	{
		if (*(unsigned char *)ptr++ == (unsigned char)ch)
			return ((void *)((unsigned char *)ptr - 1));
	}
	return (NULL);
}

/*int main(){
	const char *src="www.google.com";
	unsigned char c ='.';
	const char *ret;

	ret = ft_memchr(src, c, sizeof(src));
	printf("%s\n", ret);
	return 0;

}*/
