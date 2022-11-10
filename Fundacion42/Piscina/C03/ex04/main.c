/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 02:52:23 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/08 02:52:26 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *dsrc, char *find);

int	main(void)
{
	char	src[] ="pinChe peloTxuDo";
	char	tofind[] ="x";
	char	src2[] ="pinChe peloTxuDo";
	char	tofind2[] ="x";

	printf( "%s\n", strstr("This is another example", "is") );

    printf("Resultado Orig -> ");
    printf("%s ", strstr(src2, tofind2));

    printf("\n-----------------\n");

	printf("Resultado 1222 -> ");
	printf("%s", ft_strstr(src, tofind));
}
