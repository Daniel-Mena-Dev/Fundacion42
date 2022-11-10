/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:20:15 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/07 19:20:17 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[20] ="pinChe peloTuDo";
	char	src[20] ="xer";
    char	dest2[20] ="pinChe peloTuDo";
	char	src2[20] ="xer";


	ft_strcat(dest, src);
    strcat(dest2, src2);
    printf("Resultado Orig -> ");
    printf("%s ", dest2);

    printf("\n-----------------\n");
	
	printf("Resultado 1222 -> ");
	printf("%s", dest);
}
