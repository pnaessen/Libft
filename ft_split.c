/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:48:38 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/13 17:30:07 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_count_words(char const *str, char c)
{
	size_t	word_count;
	size_t	i;

	word_count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			word_count++;
		i++;
	}
	return (word_count);
}

static void	ft_copy_word(char *dest, char const *src, char c)
{
	size_t	i;

	i = 0;
	while (src[i] && src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

static void	ft_allocate_words(char **result, char const *str, char c)
{
	size_t	word_len;
	size_t	word_index;
	size_t	i;

	word_index = 0;
	i = 0;
	while (str[word_index])
	{
		word_len = 0;
		while (str[word_index + word_len] && str[word_index + word_len] != c)
			word_len++;
		if (word_len > 0)
		{
			result[i] = malloc(sizeof(char) * (word_len + 1));
			if (!result[i])
				return ;
			ft_copy_word(result[i], (str + word_index), c);
			i++;
			word_index = word_index + word_len;
		}
		else
			word_index++;
	}
	result[i] = 0;
}

char	**ft_split(char const *str, char c)
{
	size_t	word_count;
	char	**result;

	if (!str)
		return (NULL);
	word_count = ft_count_words(str, c);
	result = malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	ft_allocate_words(result, str, c);
	return (result);
}
/*int main()
{
	char	**tab;
	int		i;

	tab = ft_split("     Tripouille 42  ", ' ');
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
