/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:31:13 by svkhacha          #+#    #+#             */
/*   Updated: 2022/03/26 19:24:29 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	count;
	size_t	i;
	size_t	len;

	i = -1;
	count = 1;
	len = ft_strlen(s);
	while (s[++i] && s[i] == c)
		;
	while (s[--len] && s[len] == c && i < len)
		;
	if (i == ft_strlen(s))
		return (0);
	while (s[i] && i < len)
	{
		if (s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	return (count);
}

static char	*putword(const char *s, size_t startindex, size_t len)
{
	char	*word;
	size_t	i;

	i = -1;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (++i < len)
		word[i] = s[startindex + i];
	word[i] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	starti;
	size_t	endi;
	size_t	i;
	size_t	wordcount;
	char	**result;

	starti = 0;
	i = -1;
	wordcount = word_count(s, c);
	result = malloc(sizeof(char *) * (wordcount + 1));
	if (!s || !result)
		return (NULL);
	while (++i < wordcount)
	{
		while (s[starti] && s[starti] == c)
			starti++;
		endi = starti;
		while (s[endi] && s[endi] != c)
			endi++;
		result[i] = putword(s, starti, endi - starti);
		starti = endi;
	}
	result [i] = 0;
	return (result);
}
