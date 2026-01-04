/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:44:15 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/24 12:52:56 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;
	int	size;

	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc((size) * sizeof(int));
	if (!array)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (i);
}
/*#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*range;
	int	size;

	min = 3;
	max = 8;
	i = 0;
	size = ft_ultimate_range(&range, min, max);
	i = 0;
	printf("\nRange Size: %d\n", size);
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
	size = ft_ultimate_range(&range, 5, 5);
	printf("size (5,5): %d, range: %p\n", size, range);
}*/
