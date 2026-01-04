/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:26:32 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/10/30 19:02:15 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

/*
#include <stdio.h>

int	main(void)
{
	int	array[] = {0, 1};
	int	i;
	int	len;

	len = 2;
	for (i = 0; i < len; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	ft_rev_int_tab(array, len);
	for (i = 0; i < len; i++)
	{
		printf("%d ", array[i]);
	}
	return (0);
}
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	rev;

	i = 0;
	size--;
	while (i <= size)
	{
		rev = tab[i];
		tab[i] = tab[size];
		tab[size] = rev;
		i++;
		size--;
	}
}
