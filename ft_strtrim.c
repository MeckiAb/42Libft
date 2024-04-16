/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:20:27 by labderra          #+#    #+#             */
/*   Updated: 2024/04/16 09:34:48 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*p;

	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, (int)s1[i]) != NULL)
		i++;
	while (j > i && ft_strchr(set, (int)s1[j]) != NULL)
		j--;
	if (j > i)
		j++;
	p = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!p)
		return (NULL);
	k = 0;
	while (k < j - i)
	{
		p[k] = s1[i + k];
		k++;
	}
	p[k] = '\0';
	return (p);
}
