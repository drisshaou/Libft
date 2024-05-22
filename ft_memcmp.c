/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:36:03 by drhaouha          #+#    #+#             */
/*   Updated: 2024/05/22 13:12:58 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	pos;
	int		diff;

	pos = 0;
	diff = 0;
	while (pos < n)
	{
		diff = *(unsigned char *)s1++ - *(unsigned char *)s2++;
		if (diff != 0)
			return (diff);
		pos++;
	}
	return (0);
}
