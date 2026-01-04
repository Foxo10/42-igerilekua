/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:36:54 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/07 12:03:03 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_uplowcase(char *ptr, int bool)
{
	if (bool == 0)
	{
		if (*ptr >= 97 && *ptr <= 122)
		{
			*ptr -= 32;
			bool = 1;
		}
		else
		{
			bool = 1;
		}
	}
	else
	{
		if (*ptr >= 65 && *ptr <= 90)
		{
			*ptr += 32;
		}
	}
	return (bool);
}

char	*ft_strcapitalize(char *str)
{
	int		bool;
	char	*ptr;

	ptr = str;
	bool = 0;
	while (*ptr)
	{
		if ((*ptr > 64 && *ptr < 91) || (*ptr > 96 && *ptr < 123))
		{
			bool = ft_uplowcase(ptr, bool);
		}
		else
		{
			if (*ptr >= 48 && *ptr <= 57)
			{
				bool = 1;
			}
			else
			{
				bool = 0;
			}
		}
		ptr++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	strin1[] = "el5rov:mv^0j {~n5dtal]`)y,$";
	char	strin2[] = "9s8sJ|p/wbk);p&yX'Z*@CqYt;p'f.dak@yvk:w_";
	char	strin3[] = "6_`Zn*S;<nff.,;d+Xf*>jxx56e#C";

	printf("%s\n", ft_strcapitalize(strin1));
	printf("%s\n", ft_strcapitalize(strin2));
	printf("%s\n", ft_strcapitalize(strin3));
	return (0);
}*/
