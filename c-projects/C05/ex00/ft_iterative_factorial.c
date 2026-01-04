/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:58:51 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/12 15:03:47 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	resul;

	if (nb < 0)
	{
		return (0);
	}
	resul = 1;
	while (nb > 0)
	{
		resul = resul * nb;
		nb--;
	}
	return (resul);
}
