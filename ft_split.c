/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:17:42 by labderra          #+#    #+#             */
/*   Updated: 2024/04/15 17:36:03 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_cntwords(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (!s[i])
			break ;
		words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static unsigned int	ft_getword(char const *s, char c, int n)
{
	int				words;
	unsigned int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (!s[i])
			break ;
		if (words == n)
			break ;
		words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	size_t	i;
	int		j;

	list = (char **)malloc(sizeof(char *) * (ft_cntwords(s, c) + 1));
	if (!list)
		return (NULL);
	j = 0;
	while (j < ft_cntwords(s, c))
	{
		i = ft_wordlen(&s[ft_getword(s, c, j)], c);
		list[j] = ft_substr(s, ft_getword(s, c, j), i);
		if (!list[j])
		{
			while (j-- > 0)
				free(list[j]);
			free(list);
			return (NULL);
		}
		j++;
	}
	list[j] = NULL;
	return (list);
}
