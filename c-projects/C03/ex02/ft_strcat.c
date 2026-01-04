/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:19:04 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/11 14:10:42 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (j[src])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = src[j];
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	strin1[] = "Hello ";
	char	strin2[] = "World";
	char	strinVacio[] = "";

	printf("%s\n", ft_strcat(strin1, strin2));
	printf("%s\n", ft_strcat(strin2, ""));
	printf("%s\n", ft_strcat(strinVacio, strin1));
	return (0);
}*/
