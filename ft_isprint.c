/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:05:26 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/12 09:14:31 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c <= 31 || c >= 127)
		return (0);
	else
		return (1);
}

/*#include <stdio.h>
int	main(void)
{
	int i = -1;
	while (i < 129)
	{
		printf("%d = %d\n", i, ft_isprint(i));
	}
}*/
