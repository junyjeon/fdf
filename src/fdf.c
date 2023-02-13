/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:04:01 by junyojeo          #+#    #+#             */
/*   Updated: 2023/02/13 17:45:29 by junyojeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_error(char *str)
{
	write(2, str, ft_strlen(str) + 1);
	exit(1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	char	*str;
	t_data	data;

	if (argc != 2)
		ft_error("\n");
	str = ft_strrchr(argv[1], '.');
	if (ft_strncmp(str, ".fdf", 5) != 0)
		ft_error("only .fdf file can open\n");
	data = init_mlx(argv);
	draw_map(&data);
	cntl_map(&data);
	mlx_loop(data.mlx);
	return (0);
}
