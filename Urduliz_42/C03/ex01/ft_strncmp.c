/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 19:59:24 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/11 14:10:40 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char	strin1[] = "hola";
	char	strin2[] = "hola1";

	printf("%d\n", ft_strncmp(strin1, strin2, 5));
	printf("%d\n", ft_strncmp("", "", 4));
	printf("%d\n", ft_strncmp("Hol", "hola", 3));
	printf("%d\n", ft_strncmp("Hola", "Hol", 3));
}*/
