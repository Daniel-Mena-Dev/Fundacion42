/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:31:35 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/12/14 19:19:25 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dest, const char *sr, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (sr[0] == '\0')
		return ((char *)dest);
	else if (dest[0] == '\0')
		return (NULL);
	while (dest[i] != '\0')
	{
		j = 0;
		while (dest[i + j] == sr[j] && (i + j) < n)
		{
			if (dest[i + j] == '\0' && sr[j] == '\0')
				return ((char *)&dest[i]);
			j++;
		}
		if (sr[j] == '\0')
			return ((char *)&dest[i]);
		i++;
	}
	return (0);
}
