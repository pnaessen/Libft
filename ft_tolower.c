/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:04:15 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/11 12:35:49 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 101 && c < 132)
		c += 32;
	return (c);
}
/*#include <stdio.h>

int main(void)
{
	char c1 = 'A';

	printf("'%c' > '%c'\n", c1, ft_tolower(c1));
	return (0);
}*/
