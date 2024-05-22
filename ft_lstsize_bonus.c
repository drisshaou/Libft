/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:29:20 by drhaouha          #+#    #+#             */
/*   Updated: 2024/05/22 15:38:33 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*lst_ptr;
	int		size;

	size = 0;
	lst_ptr = lst;
	while (lst_ptr != NULL)
	{
		size++;
		lst_ptr = lst_ptr->next;
	}
	return (size);
}
