/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:14:04 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/10/29 16:08:52 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	value;

	value = *a;
	*a = *b;
	*b = value;
}
/*
#include <stdio.h>

int	main(void)
{
	int	i1;
	int	i2;

	i1 = 1;
	i2 = 2;
	printf("i1 = %d\n", i1);
	printf("i2 = %d\n", i2);
	ft_swap(&i1, &i2);
	printf("i1 = %d\n", i1);
	printf("i2 = %d\n", i2);
	return (0);
}
*/
