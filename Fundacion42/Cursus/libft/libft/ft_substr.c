/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:42:40 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/12/23 18:46:36 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *st, unsigned int start, size_t ln)
{
	char	*sst;
	size_t	i;

	i = 0;
	if (!st)
		return (NULL);
	else if ((size_t)start > ft_strlen(st))
		return (ft_strdup(""));
	else if (ln > (ft_strlen(st) - start))
		ln = (ft_strlen(st) - start);
	sst = (char *)malloc(sizeof(char) * (ln + 1));
	if (!sst)
		return (NULL);
	while (i < ln)
	{
		sst[i] = *(st + start + i);
		i++;
	}
	sst[i] = '\0';
	return (sst);
}
