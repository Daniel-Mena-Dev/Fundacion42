/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:53:24 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/06 18:53:26 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	str[] ="A";
	char	stre[] ="z";
    int r;
    int r2;

    r = 0;
    r2 = 0;
	r = ft_strncmp(str, stre, 5);
    r2 = strncmp(str, stre, 5);
    printf("Resultado Orig -> ");
    printf("%d ", r2);

    printf("\n-----------------\n");
	printf("Resultado222 -> ");
	printf("%d", r);
}
