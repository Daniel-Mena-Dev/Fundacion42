/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:42:40 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/12/23 19:15:51 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *sf, char const *ss)
{
	char	*sfinal;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!sf || !ss)
		return (NULL);
	sfinal = (char *)malloc(sizeof(char) * (ft_strlen(sf) + ft_strlen(ss) + 1));
	while (sf[i] != '\0')
	{
		sfinal[i] = sf[i];
		i++;
	}
	while (ss[j] != '\0')
	{
		sfinal[i] = ss[j];
		i++;
		j++;
	}
	sfinal[i] = '\0';
	return (sfinal);
}
