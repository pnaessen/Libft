/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:44:53 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/07 15:08:16 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*t;

	i = 0;
	t = (unsigned char *)s;
	while (i < n)
	{
		t[i] = c;
		i++;
	}
}
