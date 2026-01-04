/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00_v3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:31:23 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/10/25 14:29:07 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rush00(int y, int x);
void	ft_putchar(int i, int j, int y, int x);

int	main(void)
{
	ft_rush00(1, 1);
	ft_rush00(5, 1);
	ft_rush00(1, 5);
	ft_rush00(5, 3);
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
			ft_putchar(i, j, y, x);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_putchar(int i, int j, int x, int y)
{
	x = x - 1;
	y = y - 1;
	if ((i == 0 && j == 0) || (i == 0 && j == x))
	{
		write(1, "°", 2);
	}
	else if ((i == y && j == x) || (i == y && j == 0))
	{
		write(1, "°", 2);
	}
	else if (i == 0 && (j > 0 || j < y))
	{
		write(1, "-", 1);
	}
	else if (j == 0 && (i > 0 || i < x))
	{
		write(1, "|", 1);
	}
	else
	{
		write(1, " ", 1);
	}
}
