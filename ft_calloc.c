/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:20:21 by drhaouha          #+#    #+#             */
/*   Updated: 2024/05/22 13:04:54 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t el, size_t size)
{
	void	*result;

	if (size != 0 && el > (SIZE_MAX / size))
		return (NULL);
	result = (char *)malloc(el * size);
	if (!result)
		return (NULL);
	ft_bzero(result, size * el);
	return (result);
}
