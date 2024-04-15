/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:42:15 by labderra          #+#    #+#             */
/*   Updated: 2024/04/15 20:05:53 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	str[13];
	int		i;
	int		sign;

	sign = 'x';
	i = 12;
	str[i--] = '\0';
	if (n == -2147483648)
		return (ft_strtrim("x-2147483648", "x"));
	else if (n < 0)
	{
		n = -n;
		sign = '-';
	}
	else if (n == 0)
		str[i--] = '0';
	while (n > 0)
	{
		str[i--] = n % 10 + '0';
		n = n / 10;
	}
	str[i--] = sign;
	while (i >= 0)
		str[i--] = 'x';
	return (ft_strtrim(str, "x"));
}
