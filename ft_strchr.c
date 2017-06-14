/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 10:48:22 by nngwenya          #+#    #+#             */
/*   Updated: 2017/06/14 10:48:28 by nngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	int n;

	n = ft_strlen(s);
	i = 0;
	while (i < n && s[i] != c)
		i++;
	if (s[i] == c)
		return ((char *)(s + i));
	else
		return (NULL);
}
