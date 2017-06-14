/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 11:04:51 by nngwenya          #+#    #+#             */
/*   Updated: 2017/06/14 11:04:59 by nngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		split_count(char const *s, char c)
{
	int count;
	int next;

	if (!s)
		return (0);
	count = 0;
	next = 1;
	while (*s)
	{
		if (*s != c && next)
		{
			count++;
			next = 0;
		}
		else if (*s == c)
			next = 1;
		s++;
	}
	return (count);
}

static	int		word_len(char const *s, char c)
{
	int i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static	char	*add_word(char const *src, char c)
{
	int		j;
	char	*dst;

	dst = (char *)malloc(sizeof(*dst) * word_len(src, c) + 1);
	if (!dst)
		return (NULL);
	j = 0;
	while (src[j] != c && src[j])
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (dst);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**split;
	int		y;
	int		i;

	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof(split) * split_count(s, c) + 1);
	if (!split)
		return (NULL);
	y = 0;
	i = 0;
	while (i < (int)ft_strlen(s))
	{
		if (s[i] != c)
		{
			split[y] = add_word(&s[i], c);
			if (!split[y++])
				return (NULL);
			i += word_len(&s[i], c);
		}
		else
			i++;
	}
	split[y] = NULL;
	return (split);
}
