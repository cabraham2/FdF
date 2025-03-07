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

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (size--)
			((unsigned char *)dest)[size] = ((unsigned char *)src)[size];
	}
	else
	{
		while (size--)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*int main(){
	char data[] = "123456789";
	ft_memmove(data + 2, data, 5);
	printf("%s\n", data);
	return 0;
}*/
