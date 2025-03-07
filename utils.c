/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabraham <cabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:59:05 by cabraham          #+#    #+#             */
/*   Updated: 2025/03/07 16:59:05 by cabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	handle_close(t_fdf *data)
{
	mlx_destroy_image(data->mlx_ptr, data->image);
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	mlx_destroy_display(data->mlx_ptr);
	free(data->mlx_ptr);
	free_data(data);
	exit (1);
}

int	error(char *str)
{
	ft_printf("%s\n", str);
	exit (1);
}

void	free_data(t_fdf *data)
{
	int	i;

	i = 0;
	while (i < data->height)
		free(data->z_matrix[i++]);
	free(data->z_matrix);
	free(data);
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

void	free_matrix(int **matrix, int height)
{
	int	i;

	i = height;
	while (i >= 0)
		free(matrix[i--]);
	free(matrix);
}
