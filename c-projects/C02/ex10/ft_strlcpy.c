/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:54:02 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/13 11:52:57 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src)
{
	unsigned int	count;

	count = 0;
	while (*src)
	{
		count++;
		src++;
	}
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = ft_strlen(src);
	if (size == 0)
	{
		return (count);
	}
	while (src[i] && i < (size - 1))
	{
		i[dest] = i[src];
		i++;
	}
	i[dest] = '\0';
	return (count);
}
/*
ft_strlcpy(dest[10], "World!", 10) Expected "World!" (len 6),
	got "World!" (len 6)
ft_strlcpy(dest[10], "Hello, World!", 10) Expected "Hello, Wo" (len 13),
	got "Hello, World!" (len 9)
ft_strlcpy(dest[5], "Hello, World!", 5) Expected "Hell" (len 13), got "Hello,
	World!" (len 4)
ft_strlcpy(dest[10], "", 5) Expected "" (len 0), got "" (len 0)
ft_strlcpy(dest[1], "Hello, World!", 1) Expected "" (len 13), got "Hello,
	World!" (len 0)
*/

/*#include <stdio.h>

int	main(void)
{
	unsigned int	resul;
	char			dest1[10];

	resul = ft_strlcpy(dest1, "World!", 0);
	printf("%s, %d\n", dest1, resul);
	resul = ft_strlcpy(dest1, "World!", 3);
	printf("%s, %d\n", dest1, resul);
	return (0);
}*/
