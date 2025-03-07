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

char	*ft_strchr(const char *src, int c)
{
	while (*src && *src != (char)c)
		src++;
	if (*src == (char)c)
		return ((char *)src);
	return (NULL);
}

/*int   main(){
		const char *src="www.facebook.com";
		const char c ='.';
		char *dest;

		dest = ft_strchr(src, c);
		printf("%s\n", dest);
		return 0;
}*/
