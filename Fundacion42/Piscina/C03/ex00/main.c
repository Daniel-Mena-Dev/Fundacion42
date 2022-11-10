/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:19:41 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/06 18:19:43 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
    char s1 [] = "ABC";
    char s2 [] = "DEF";
    int result;

    result = ft_strcmp(s1, s2);
    printf("%d\n", result);
}
/*	char	str[] ="abc";
    char	stre[] ="ABC";
    int r;
    int r2;

	r = ft_strcmp(str, stre);
    r2 = strcmp(str, stre);
    printf("Resultado -> ");
    printf("%d ", r2);
	printf("Resultado222 -> ");
	printf("%d", r);*/
