/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:40:53 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/19 12:27:39 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
	{
		size++;
	}
	return (size);
}

/*	Caso 1: size > len_dest. Devolvemos size +dest.
	Caso 2: size <= len_dest. Devolvemos
*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	i;
	unsigned int	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len_dest)
		return (size + len_src);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (len_dest);
}
/*#include <stdio.h>

int	main(void)
{
	char	dest[] = "1337 42";
	char	src[] = "Born to code";

	printf("%d\n", ft_strlcat(dest, src, 4));
	printf("%s\n", dest);
	printf("%d\n", ft_strlcat(dest, src, 15));
	printf("%s\n", dest);
	return (0);
}*/
