/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:14:13 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/03 18:14:19 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	unsigned int	res;

	res = ft_str_is_printable("ASD SADY");
	printf("Resultado 1: %d\n", res);

	res = ft_str_is_printable("    ");
	printf("Resultado 2: %d\n", res);

	res = ft_str_is_printable("1daa*ss.A");
	printf("Resultado 3: %d\n", res);

	res = ft_str_is_printable("");
	printf("Resultado 4: %d\n", res);

	res = ft_str_is_printable("\n");
	printf("Resultado 5: %d\n", res);

	return (0);
}
