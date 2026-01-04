/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odiez-gu <odiez-gu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:53:42 by odiez-gu          #+#    #+#             */
/*   Updated: 2025/11/25 20:08:07 by odiez-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_char_in_string(char ch, char *seps)
{
	while (*seps)
	{
		if (ch == *seps)
			return (1);
		seps++;
	}
	return (0);
}

int	ft_count_words(char *str, char *seps)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (ft_char_in_string(str[i], seps))
			i++;
		else
		{
			count++;
			while (str[i] && !ft_char_in_string(str[i], seps))
				i++;
		}
	}
	return (count);
}

int	ft_add_word_to_split(char **str_split, char *str, char *charset)
{
	int	k;
	int	size;

	size = 0;
	k = 0;
	while (!ft_char_in_string(str[k++], charset) && str[size])
		size++;
	*str_split = (char *)malloc(sizeof(char) * (size + 1));
	k = 0;
	while (k < size)
	{
		(*str_split)[k] = str[k];
		k++;
	}
	(*str_split)[k] = '\0';
	return (size);
}

/*	str = ",,hello,world,,"
	charset = ","
	split = {"hello", "world", 0}
 */
char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		s;
	int		i;
	int		len;

	len = ft_count_words(str, charset);
	split = (char **)malloc(sizeof(char *) * (len + 1));
	if (split == NULL)
		return (NULL);
	s = 0;
	i = 0;
	while (len - i > 0)
	{
		if (ft_char_in_string(str[s], charset))
			s++;
		else
		{
			s += ft_add_word_to_split(&split[i], &str[s], charset);
			i++;
		}
	}
	split[i] = 0;
	return (split);
}

/*#include <stdio.h>

void	print_split(char **words)
{
	int	i;

	if (!words)
	{
		printf("(null)\n");
		return ;
	}
	i = 0;
	while (words[i])
	{
		printf("words[%d] = \"%s\"\n", i, words[i]);
		i++;
	}
}

void	free_split(char **words)
{
	int	i;

	if (!words)
		return ;
	i = 0;
	while (words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);
}

int	main(void)
{
	char	*tests[] = {",,hello,world,,", "hello,world", ",,,", "",
			"  hola,,que,tal  ", "42 piscine split", NULL};
	char	*charset1;
	char	*charset2;
	int		i;
	char	**words;

	charset1 = ",";
	charset2 = " ,";
	i = 0;
	while (tests[i])
	{
		printf("Input: \"%s\"\n", tests[i]);
		words = ft_split(tests[i], charset1);
		print_split(words);
		free_split(words);
		printf("----\n");
		i++;
	}
	words = ft_split("  hola, que,tal  42 ", charset2);
	printf("Input: \"%s\"\n", "  hola, que,tal  42 ");
	print_split(words);
	free_split(words);
	return (0);
}*/
