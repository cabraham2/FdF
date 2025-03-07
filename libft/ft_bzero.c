/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:52:46 by cabraham          #+#    #+#             */
/*   Updated: 2025/03/07 16:52:58 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char		*str;
	size_t		i;

	i = 0;
	str = s;
	while (i < n)
		str[i++] = 0;
}

/*int main(){
	char str[9]= "Jesuisla";
	ft_bzero(str, sizeof(str));
	printf("%s\n", str);
	return (0);
}*/
