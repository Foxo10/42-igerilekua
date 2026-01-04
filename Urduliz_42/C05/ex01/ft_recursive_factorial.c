/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:04:11 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/12 15:09:16 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	resul;

	resul = 1;
	if (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb < 0)
	{
		return (0);
	}
	return (resul);
}
