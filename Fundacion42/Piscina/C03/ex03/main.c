/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 02:40:27 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/08 02:40:32 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{

	char s1 [] = "ABC";
    char s2 [] = "DEF";
    
    ft_strncat(s1, s2, 2);
    printf("%s\n", ft_strncat(s1, s2, 2));

	char	dest[20] ="pinChe peloTuDo";
	char	src[20] ="0000";

	char	dest2[] ="ABC";
	char	src2[] ="DEF";


	ft_strncat(dest, src, 2);
    strncat(dest2, src2, 2);
    printf("Resultado Orig -> ");
    printf("%u ", strncat(dest2, src2, 2));

    printf("\n-----------------\n");

	printf("Resultado 1222 -> ");
	printf("%s", dest);
}
