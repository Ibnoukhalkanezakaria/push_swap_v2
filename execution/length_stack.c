/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:19:50 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/20 15:50:37 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	length_stack(t_stack *lst)
{
    int count;

    if(!lst)
        return 0;
    count = 0;
    while (lst->next != NULL)
    {
        lst = lst->next;
        count++;
    }
    return count;
}
