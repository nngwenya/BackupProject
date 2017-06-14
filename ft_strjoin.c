/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 10:55:12 by nngwenya          #+#    #+#             */
/*   Updated: 2017/06/14 10:55:22 by nngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dst = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (dst)
	{
		i = 0;
		j = 0;
		while (s1[i])
		{
			dst[i] = s1[i];
			i++;
		}
		while (s2[j])
			dst[i++] = s2[j++];
		dst[i] = '\0';
		return (dst);
	}
	return (NULL);
}
