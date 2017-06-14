/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 11:02:46 by nngwenya          #+#    #+#             */
/*   Updated: 2017/06/14 11:02:54 by nngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i] == little[j] && big[i] != '\0')
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)(big + (i - j)));
		else
			i -= (j);
		i++;
	}
	return (NULL);
}
