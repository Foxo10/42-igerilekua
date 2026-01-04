/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:33:37 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/10/29 17:14:33 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 2;
	printf("El resultado de %d / %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("es %d con resto %d", a, b);
	return (0);
}
*/
