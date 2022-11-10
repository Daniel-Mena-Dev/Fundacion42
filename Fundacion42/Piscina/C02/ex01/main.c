/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:42:55 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/03 11:42:57 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:54:45 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/02 19:54:48 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest[] = "123456";
	char	src[] = "kku";

    char	dest2[] = "123456";
	char	src2[] = "kku";

    //Aplicamos la funcion
	strncpy(dest2, src2, 7);
	printf(" Forma Orig -> ");
	printf("%s\n", dest2);

    //Aplicamos la funcion propia
    ft_strncpy(dest, src, 4);

	printf("");

	//Imprimir el resultado
    printf("Resultado -> ");
    printf("%s", dest);
	
    return (0);
}