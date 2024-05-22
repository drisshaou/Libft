/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:30:45 by drhaouha          #+#    #+#             */
/*   Updated: 2024/05/22 13:56:16 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*destination;
	unsigned char	*source;

	if (dst <= src)
		ft_memcpy(dst, src, len);
	else
	{
		destination = (unsigned char *)dst;
		source = (unsigned char *)src;
		while (len != 0)
		{
			destination[len - 1] = source[len - 1];
			len--;
		}
	}
	return (dst);
}
