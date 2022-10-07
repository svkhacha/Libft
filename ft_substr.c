/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substrd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:12:17 by svkhacha          #+#    #+#             */
/*   Updated: 2022/03/25 22:20:43 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	size_t			lenstr;
	size_t			lenstart;
	unsigned int	i;

	if (!s)
		return (NULL);
	lenstr = ft_strlen(s);
	lenstart = ft_strlen(s + start);
	if (lenstart < len)
		len = lenstart;
	substring = malloc(len + 1);
	i = 0;
	while (i < len && start + i < (unsigned int)lenstr)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
