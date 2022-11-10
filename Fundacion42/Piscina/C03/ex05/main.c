/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:19:21 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/08 15:19:24 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[100] ="pinChe peloTuDo";
	char	src[100] ="uuy";

    char	dest2[100] ="pinChe peloTuDo";
	char	src2[100] ="uuy";

	unsigned int	pr = 0;
	unsigned int	pr2 = 0;

	
	pr2 = strlcat(dest2, src2, 18);
	printf("Resultado Orig ->  %d ", pr2);

    printf("\n-----------------\n");

	pr = ft_strlcat(dest, src, 18);
	printf("Resultado 1222 -> %d ", pr);
	return (0);
}
