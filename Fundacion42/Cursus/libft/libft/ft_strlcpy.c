/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:13:35 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/12/14 21:46:09 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *st1, const char *st2, size_t n)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (st2[j] != '\0')
	{
		j++;
	}
	if (!st1 || !st2)
		return (0);
	if (n == 0)
		return (j);
	while (st2[i] != '\0' && i < n - 1)
	{
		st1[i] = st2[i];
		i++;
	}
	st1[i] = '\0';
	return (j);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char str[] = "";
	char str2[] = "thor";
	size_t	n = 3;
	size_t	result;
	char result2;

    result = ft_strlcpy(str, str2, n);
    printf("%d \n", result);
	result2 = ft_strlcpy(str, str2, n);
	printf("%s \n", str2);
	
}
if (st1[i] == '\0' || !st2) Son parecidos, 
 el primero es en la posicion i que sea nulo y el otro que la cadena sea nula.


*/