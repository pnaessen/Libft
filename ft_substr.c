/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:14:51 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/07 15:51:57 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
#include <stdio.h>

int main(void)
{
    char *str = "Hello, World";
    int start = 7;
    size_t len = 5;

    char *substr = ft_substr(str, start, len);
    if (substr)
    {
        printf("%s\n", substr);
        free(substr);
	}
    else
        printf("Malloc fail\n");
    return 0;
}
