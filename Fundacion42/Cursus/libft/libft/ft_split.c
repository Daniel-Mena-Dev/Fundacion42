/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:02:05 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/16 18:14:28 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Tiene como objetivo dividir y reservar memoria para una cadena de caracteres
 * 's' en un array de strings separadas por un carácter delimitador 'char c'.
 * Devuelve un array de punteros a cadenas, donde cada elemento del array es 
 * una cadena que contiene cada una de las separaciones de la cadena original.
*/
#include "libft.h"

size_t	ft_wordscounter(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**scpy;
	size_t	i;
	size_t	wordlen;

	scpy = malloc(sizeof(char **) * (ft_wordscounter(s, c) + 1));
	if (!scpy)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			wordlen = 0;
			while (*s && *s != c)
			{
				wordlen++;
				s++;
			}
			scpy[i++] = ft_substr(s - wordlen, 0, wordlen);
		}
		else
			s++;
	}
	scpy[i] = NULL;
	return (scpy);
}

size_t	ft_wordscounter(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i++] != c && (s[i] == c || s[i] == '\0'))
			words++;
	}
	return (words);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*original = "La prueba de la cadena para que veas que funciona";
	char	c = 'a';
	char	**r = ft_split(original, c);

	while (*r)
		printf("%s\n", *(r++));

	return (0);
}
*/