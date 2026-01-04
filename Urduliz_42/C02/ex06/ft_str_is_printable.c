/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:38:57 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/03 19:52:07 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str == 127)
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

	i = ft_str_is_printable("abCdefG");
	ch = i + '0';
	write(1, &ch, 1);
	write(1, "\n", 1);
	i = ft_str_is_printable("\n\t\v\f");
	ch = i + '0';
	write(1, &ch, 1);
	write(1, "\n", 1);
	i = ft_str_is_printable("A B-_C");
	ch = i + '0';
	write(1, &ch, 1);
	write(1, "\n", 1);
}*/
