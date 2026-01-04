/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:08:32 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/17 14:38:45 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_isspace(char str)
{
	if (str == '-' || str == '+')
	{
		return (1);
	}
	if ((str >= '\t' && str <= '\r') || str == ' ')
	{
		return (1);
	}
	if (str >= '0' && str <= '9')
	{
		return (0);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int		resul;
	bool	is_positive;

	is_positive = true;
	if (!*str)
		return (0);
	while (ft_isspace(*str))
	{
		if (*str == 45)
			is_positive = !is_positive;
		str++;
	}
	resul = 0;
	while (*str >= '0' && *str <= '9')
	{
		resul = resul * 10 + (*str - '0');
		str++;
	}
	if (!is_positive)
		resul *= -1;
	return (resul);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	printf("%d\n", ft_atoi("+abc123"));
	printf("%d\n", ft_atoi(" -\t-\n 123abc+"));
	printf("%d\n", ft_atoi("1 2 3 4 5 6 7 8 9 0 a b c d e f"));
	printf("%d\n", ft_atoi(""));
	return (0);
}*/
