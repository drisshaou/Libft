/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:37:36 by drhaouha          #+#    #+#             */
/*   Updated: 2024/05/20 12:50:50 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkset(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	total_len;

	if (!s1 || !set)
		return (NULL);
	while (*s1)
	{
		if (ft_checkset(*s1, set))
			s1++;
		else
			break ;
	}
	total_len = ft_strlen(s1);
	while (ft_checkset(s1[total_len - 1], set) && total_len != 0)
		total_len--;
	return (ft_substr(s1, 0, total_len));
}
