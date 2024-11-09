/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:13:58 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/09 13:21:58 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return (s + i);
		i--;
	}
	return (NULL);
}

/*#include "libft.h"

int	main(void)
{
	const char *str = "Hello, World";
	char c = 'o';

	char *result = ft_strrchr(str, c);
	if (result)
		printf("Trouvé '%c': %s\n", c, result);
	else
		printf("Pas la '%c'\n", c);
	return (0);
}*/
