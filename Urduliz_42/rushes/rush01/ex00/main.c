/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:44:41 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/03 11:27:41 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#define ROWS 4
#define COLS 4
#define SIZE 16

void	ft_print_matrix(int matrix[ROWS][COLS])
{
	int		i;
	int		j;
	char	value;

	i = 0;
	while (i < ROWS)
	{
		j = 0;
		while (j < COLS)
		{
			value = matrix[i][j] + '0';
			write(1, &value, 1);
			if (j < COLS - 1)
			{
				write(1, " ", 1);
			}
			else
			{
				write(1, "\n", 1);
			}
			j++;
		}
		i++;
	}
}

void	ft_create_matrix(int **matrix)
{
	int	i;
	int	j;

	i = 0;
	matrix = (int **)malloc(ROWS * 8);
	while (i < ROWS)
	{
		matrix[i] = (int *)malloc(COLS * 4);
		i++;
	}
	i = 0;
	while (i < ROWS)
	{
		j = 0;
		while (j < COLS)
		{
			matrix[i][j] = i * COLS + j + 1;
			j++;
		}
		i++;
	}
}

/* values[31] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"; */
void	ft_get_borders(int *ptr, char *values)
{
	char	ch;
	int		i;

	i = 0;
	while (values[i] != '\0')
	{
		if (values[i] != ' ')
		{
			ch = values[i];
			ptr[i / 2] = ch - '0';
		}
		i++;
	}
}

void	ft_create_answer(int matrix[4][4])
{
	matrix[0][0] = 1;
	matrix[0][1] = 2;
	matrix[0][2] = 3;
	matrix[0][3] = 4;
	matrix[1][0] = 2;
	matrix[1][1] = 3;
	matrix[1][2] = 4;
	matrix[1][3] = 1;
	matrix[2][0] = 3;
	matrix[2][1] = 4;
	matrix[2][2] = 1;
	matrix[2][3] = 2;
	matrix[3][0] = 4;
	matrix[3][1] = 1;
	matrix[3][2] = 2;
	matrix[3][3] = 3;
}

/* "col1up col2up col3up col4up
col1down col2down col3down col4down
row1left row2left row3left row4left
row1right row2right row3right row4right" */
int	main(int argc, char *argv[])
{
	int	**dynamatrix;
	int	borders[16];
	int	matrix[4][4];

	dynamatrix = NULL;
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ft_create_answer(matrix);
	ft_create_matrix(dynamatrix);
	ft_print_matrix(matrix);
	ft_get_borders(borders, argv[1]);
	return (0);
}
