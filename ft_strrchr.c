/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 11:03:45 by nngwenya          #+#    #+#             */
/*   Updated: 2017/06/14 11:03:53 by nngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int n;
	int last;

	i = 0;
	last = 0;
	n = ft_strlen(s);
	while (i < n)
	{
		if (s[i] == c)
			last = i;
		i++;
	}
	if (s[last] == c)
		return ((char *)(s + last));
	if (c == '\0')
		return ((char *)(s + n));
	return (NULL);
}
