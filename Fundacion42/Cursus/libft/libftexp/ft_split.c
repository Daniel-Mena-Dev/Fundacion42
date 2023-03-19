/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:02:05 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/26 19:09:04 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	char	**scpy;
	size_t	i;
	size_t	wordlen;

	i = 0;
	scpy = malloc(sizeof(char *) * (ft_wordscounter(s, c) + 1)); //Reserva memoria para un array de punteros a cadenas. La cantidad de memoria reservada depende del número de palabras en la cadena s, que se obtiene a través de la función ft_wordscounter. Se reserva espacio para un puntero por cada palabra, más uno adicional para el puntero final, que debe ser nulo.
	if(!scpy)
		return(NULL);
	while(*s)
	{
		if(*s != c)
		{
			wordlen = 0;
			while (*s && *s != c)
			{
				wordlen++;
				s++;
			}
			scpy[i++] = ft_substr(s - wordlen, 0, wordlen);	// primero se llama a la función ft_substr para obtener una subcadena de la cadena s. Luego, se asigna el puntero a esa subcadena en la posición i del array scpy. Finalmente, se incrementa el valor de i en 1 usando el operador ++ postfijo.En otras palabras, primero se asigna el puntero a la subcadena en la posición i del array scpy, y luego se incrementa el valor de i en 1 para que la próxima subcadena se agregue a la siguiente posición del array.
		}
		else
			s++;
	}
	scpy[i] = '\0';
	return(scpy)
}

size_t	ft_wordscounter(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while(s[i] != '\0')
	{
		if(s[i++] != c && (s[i] == c || s[i] != '\0')) //El i++ dentro de éste caso va a hacer que en la primera comparación tenga su valor actual i=0 pero después de '&&' ya se le aplica +1, osea ser que siempre vas a estar comparando 2 condiciones que alberganm i pero con diferente valor dentro del if.
			words++;
	}
	return(words);
}

/*
La función ft_split tiene como objetivo dividir una cadena de caracteres (char) en palabras separadas por un carácter delimitador (char c). Devuelve un array de punteros a cadenas, donde cada elemento del array es una cadena que contiene una de las palabras de la cadena original.

La función comienza por contar el número de palabras en la cadena de entrada mediante la función ft_wordscounter. A continuación, reserva memoria para un array de punteros a cadenas, la cantidad de memoria reservada depende del número de palabras que se haya encontrado.

Luego, se recorre la cadena de entrada y se busca cada palabra. Para ello, se comprueba si el carácter actual es igual al carácter delimitador. Si no lo es, se inicia una nueva palabra y se va copiando letra por letra hasta llegar al final de la misma. Cuando se encuentra el carácter delimitador, se almacena la palabra en el array de punteros a cadenas.

Finalmente, se agrega un puntero nulo al final del array de punteros a cadenas y se devuelve el array.
*/

/*
Supongamos que tenemos la cadena de entrada str igual a "Hola mundo, ¿cómo estás?" y queremos dividirla utilizando el delimitador ",".

En la primera iteración del ciclo while, el apuntador s apuntaría al primer carácter de la cadena ("H"), y luego entraría en el primer if porque no es igual a la coma (","). Luego, en el siguiente ciclo while, contaríamos la cantidad de caracteres que tiene la palabra "Hola" hasta llegar a la coma. Esa cantidad de caracteres se almacenaría en wordlen.

Luego, la expresión s - wordlen nos da un apuntador que apunta al carácter justo antes del inicio de la palabra "Hola". Esto se debe a que s actualmente apunta al carácter justo después de la coma, pero wordlen nos dice que la palabra "Hola" comienza wordlen caracteres antes de ese punto. Entonces, s - wordlen es un apuntador que apunta al primer carácter de la palabra "Hola" en la cadena original.

Finalmente, al llamar a ft_substr(s - wordlen, 0, wordlen), estamos extrayendo la subcadena que comienza en el carácter apuntado por s - wordlen (el primer carácter de la palabra "Hola") y que tiene una longitud de wordlen caracteres (la longitud de la palabra "Hola"). El resultado de esta operación es la subcadena "Hola".

Entonces, scpy[i++] = ft_substr(s - wordlen, 0, wordlen) agrega la subcadena "Hola" al arreglo de cadenas scpy y aumenta el índice i en 1, de modo que la siguiente vez que se ejecute esa línea, la subcadena extraída se almacenará en la siguiente posición del arreglo scpy.
*/


/*
#include "libft.h"

char **ft_split(char const *s, char c)
{
	char	**scpy;
	size_t	i;
	size_t	wordlen;

	i = 0;
	scpy = malloc(sizeof(char *) * (ft_wordscounter(s, c) + 1)); //Reserva memoria para un array de punteros a cadenas. La cantidad de memoria reservada depende del número de palabras en la cadena s, que se obtiene a través de la función ft_wordscounter. Se reserva espacio para un puntero por cada palabra, más uno adicional para el puntero final, que debe ser nulo.
	if(!scpy)
		return(NULL);
	while(*s)
	{
		if(*s != c)
		{
			wordlen = 0;
			while (*s && *s != c)
			{
				wordlen++;
				s++;
			}
			scpy[i++] = ft_substr(s - wordlen, 0, wordlen);	// primero se llama a la función ft_substr para obtener una subcadena de la cadena s. Luego, se asigna el puntero a esa subcadena en la posición i del array scpy. Finalmente, se incrementa el valor de i en 1 usando el operador ++ postfijo.En otras palabras, primero se asigna el puntero a la subcadena en la posición i del array scpy, y luego se incrementa el valor de i en 1 para que la próxima subcadena se agregue a la siguiente posición del array.
		}
		else
			s++;
	}
	scpy[i] = '\0';
	return(scpy)
}

size_t	ft_wordscounter(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while(s[i] != '\0')
	{
		if(s[i++] != c && (s[i] == c || s[i] != '\0')) //El i++ dentro de éste caso va a hacer que en la primera comparación tenga su valor actual i=0 pero después de '&&' ya se le aplica +1, osea ser que siempre vas a estar comparando 2 condiciones que alberganm i pero con diferente valor dentro del if.
			words++;
	}
	return(words);
}
*/