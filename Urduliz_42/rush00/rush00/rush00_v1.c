/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00_v1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:31:23 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/10/25 13:27:31 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rush00(int i, int j);
void	ft_putchar(int i, int j);

int	main(void)
{
	ft_rush00(5, 3);
	ft_rush00(5, 1);
	ft_rush00(1, 1);
	ft_rush00(1, 5);
	ft_rush00(4, 4);
	return (0);
}
/* 
	'x' e 'y' invertidos para que cuadre con el enunciado.
	-eje x -> número de columnas.
	-eje y -> número de filas.
*/

void	ft_rush00(int y, int x)
{
	int	i;
	int	j;

	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			write(1, "*", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_putchar(int x, int y)
{
	x++;
	y++;
	write(1, "°", 2);
	write(1, "˚", 2);
	write(1, "-", 1);
	write(1, "\n", 1);
	write(1, "|", 1);
}
