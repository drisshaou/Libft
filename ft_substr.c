/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:37:46 by drhaouha          #+#    #+#             */
/*   Updated: 2024/05/22 16:11:59 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			i;
	unsigned int	s_length;

	i = 0;
	if (s && len > ft_strlen(s))
		len = ft_strlen(s);
	if (s && start > ft_strlen(s))
		len = 0;
	if (s && start <= ft_strlen(s) && len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (!s || !substr)
		return (NULL);
	s_length = ft_strlen(s);
	if (start < s_length)
	{
		while (i < len && s[i + start])
		{
			substr[i] = s[i + start];
			i++;
		}
	}
	substr[i] = '\0';
	return (substr);
}
