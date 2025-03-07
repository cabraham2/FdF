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

int	ft_atoi(const char *str)
{
	size_t	i;
	int		num;
	int		neg;

	i = 0;
	neg = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		++i;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		++i;
	}
	while (ft_isdigit(str[i]))
	{
		num = (num * 10) + str[i] - '0';
		++i;
	}
	return (num * neg);
}

/*int main(int argc, char **argv){
	(void)argc;
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d\n", atoi(argv[1]));
	return 0;
}*/
