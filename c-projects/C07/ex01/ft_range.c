/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:32:54 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/20 17:10:58 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	size;

	size = max - min;
	if (size <= 0)
		return (NULL);
	i = 0;
	array = (int *)malloc(size * sizeof(int));
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

/*#include <stdio.h>

int	main(void)
{
	int	*array;
	int	i;
	int	min;
	int	max;

	min = -1;
	max = 5;
	array = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	free(array);
	return (0);
}*/
