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

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	tab = (char **)malloc((ft_strlen(s) + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			k = 0;
			tab[j] = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
			if (tab[j] == NULL)
				return (NULL);
			while (s[i] != c && s[i] != '\0')
			{
				tab[j][k] = s[i];
				i++;
				k++;
			}
			tab[j][k] = '\0';
			j++;
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