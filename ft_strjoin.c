/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:56:46 by svkhacha          #+#    #+#             */
/*   Updated: 2022/03/24 23:03:03 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*conc;

	i = 0;
	j = 0;
	if (s1)
	{
		while (s1[i])
			i++;
	}
	if (s2)
	{
		while (s2[j])
			j++;
	}
	conc = (char *)malloc((i + j + 1) * sizeof(char));
	ft_memmove(conc, s1, i + 1);
	ft_strlcat(conc, s2, i + j + 1);
	return (conc);
}
