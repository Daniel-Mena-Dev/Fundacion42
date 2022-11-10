/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:31:58 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/04 11:32:00 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest[] = "Pen";
	char	src[] = "kkre";
	unsigned int	result;
	char	dest2[] = "Pen";
	char	src2[] = "kkre";
	
	unsigned int	result2;
	unsigned int	n;

    //Aplicamos la funcion
	n = 4;

	
	result = ft_strlcpy(dest, src, n);

	printf(""); 
	printf("Resultado -> ");
	printf("%d\n", result);

	//Imprimir el resultado
	result2 = strlcpy(dest2, src2, n);
	printf("Resultado Orig -> ");
	printf("%d\n", result2);

	return (0);
}

	/*char	dest[] = "Peneeee";
	char	src[] = "kkuy";
    int n = 2;

    //Aplicamos la funcion
    ft_strlcpy(dest, src, 3);

	printf("");

	//Imprimir el resultado
    printf("Resultado -> ");
    printf("%lu", strlcpy(dest, src, n));
	
    return (0);*/

