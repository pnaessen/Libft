/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:48:38 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/09 15:05:44 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

static size_t	ft_word_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s)
		return (NULL);
	tab = (char **)malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			len = 0;
			while (s[i + len] && s[i + len] != c)
				len++;
			tab[j] = ft_substr(s, i, len);
			if (!tab[j])
				return (NULL);
			j++;
			i += len;
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}


/*#include <stdio.h>
int(main)
{
    char	**tab;
    int		i;

    tab = ft_split("Hello World", ' ');
    i = 0;
    while (tab[i] != NULL)
    {
        printf("%s\n", tab[i]);
        i++;
    }
    free(tab);
    return (0);
}
*/