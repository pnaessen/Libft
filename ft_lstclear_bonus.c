/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:31:22 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/13 18:29:22 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *temp;
    if (lst == NULL || del == NULL)
        return ;
    while (*lst != NULL)
    {
        temp = (*lst)-> next;
        ft_lstdelone(*lst, del);
        *lst  = temp;
    }
    *lst= NULL;
}
