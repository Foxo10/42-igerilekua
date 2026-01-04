/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:22:12 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/06 19:27:58 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hexa(unsigned char hex)
{
	int	hex1;
	int	hex0;

	write(1, "\\", 1);
	hex1 = hex / 16 + '0';
	hex0 = hex % 16 + '0';
	if (hex / 16 > 9)
	{
		hex1 += 'a' - ':';
	}
	if (hex % 16 > 9)
	{
		hex0 += 'a' - ':';
	}
	write(1, &hex1, 1);
	write(1, &hex0, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			ft_print_hexa(i[str]);
		}
		else
		{
			write(1, &i[str], 1);
		}
		i++;
	}
}

/*int	main(void)
{
	char	strin1[] = "Coucou\ntu vas bien ?";
	char	strin2[] = "¿áü";
	char	strin3[] = "Ho\fla\tMundo!\n";

	ft_putstr_non_printable(strin1);
	write(1, "\n", 1);
	ft_putstr_non_printable(strin2);
	write(1, "\n", 1);
	ft_putstr_non_printable(strin3);
	write(1, "\n", 1);
	return (0);
}*/
