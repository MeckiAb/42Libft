/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:54:49 by labderra          #+#    #+#             */
/*   Updated: 2024/04/10 18:48:47 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
//	size_t	i;
	char	*ptr;

//	i = 0;
	ptr = (char *)s;
/*	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		ptr = ()&s[i];
	return (ptr);
*/
	while (*ptr && *ptr != (char)c)
		ptr++;
	if (*ptr == (char)c)
		return (ptr);
	return (NULL);
}