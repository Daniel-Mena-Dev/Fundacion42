/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:30:51 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/03 17:30:54 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	unsigned int	res;

	//printf("\n------------------\n", res);

	res = ft_str_is_numeric("156");
	printf("Resultado 1: %d\n", res);

	res = ft_str_is_numeric("da543assA");
	printf("Resultado 2: %d\n", res);

	res = ft_str_is_numeric("1daa*ss.A");
	printf("Resultado 3: %d\n", res);

	res = ft_str_is_numeric("");
	printf("Resultado 4: %d\n", res);

	res = ft_str_is_numeric(" ");
	printf("Resultado 4: %d\n", res);

	return (0);
}