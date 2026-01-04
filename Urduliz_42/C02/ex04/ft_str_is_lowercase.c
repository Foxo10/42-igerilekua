/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:13:04 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/03 18:18:12 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 97 || *str > 122)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	ch;
	int		i;

	i = ft_str_is_lowercase("abCdefG");
	ch = i + '0';
	write(1, &ch, 1);
	write(1, "\n", 1);
	i = ft_str_is_lowercase("AbcdEfg");
	ch = i + '0';
	write(1, &ch, 1);
	write(1, "\n", 1);
	i = ft_str_is_lowercase("abc");
	ch = i + '0';
	write(1, &ch, 1);
	write(1, "\n", 1);
	i = ft_str_is_lowercase("asdfas_ASDFAS");
	ch = i + '0';
	write(1, &ch, 1);
	write(1, "\n", 1);
}*/
