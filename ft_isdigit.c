/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 07:42:39 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/07 14:59:26 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	main(void)
{
		int i = -1;
		while (i < 129)
		{
				printf("%d = %d\n", i, ft_isdigit(i));
				i++;
		}
}*/
