/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:42:40 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/12/14 22:14:45 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*strblock;
	char	*strcpy;
	size_t	i;

	strcpy = (char *)str;
	strblock = (char *)malloc(ft_strlen(strcpy)+ 1);
	if (strblock == NULL)
		return (NULL);
	i = 0;
	while (strcpy[i] != '\0')
	{
		strblock[i] = strcpy[i];
		i++;
	}
	strblock[i] = '\0';
	return (strblock);
}

/*
char	*strcpy;

strcpy = (char *)str;
*/
