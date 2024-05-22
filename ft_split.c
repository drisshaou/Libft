/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drhaouha <drhaouha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:31:44 by drhaouha          #+#    #+#             */
/*   Updated: 2024/05/20 12:47:21 by drhaouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	unsigned int	nb;

	nb = 0;
	while (*s)
	{
		if (*s != c && *s != '\0' && (*(s + 1) == c || *(s + 1) == '\0'))
			nb++;
		s++;
	}
	return (nb);
}

int	ft_malloc_elem(char **tab, char const *s, char c, unsigned int id)
{
	unsigned int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	tab[id] = (char *)malloc(sizeof(char) * i + 1);
	if (!(tab[id]))
	{
		i = 0;
		while (i < id)
			free(tab[i++]);
		free(tab);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char				**tab;
	unsigned int		i;
	unsigned int		id;
	unsigned int		words;

	id = 0;
	words = ft_count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!s || !tab)
		return (NULL);
	while (*s && id < words)
	{
		while (*s && *s == c)
			s++;
		if (!ft_malloc_elem(tab, s, c, id))
			return (NULL);
		i = 0;
		while (*s && *s != c)
			tab[id][i++] = *s++;
		tab[id++][i] = '\0';
	}
	tab[id] = 0;
	return (tab);
}
