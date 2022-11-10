/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:44:01 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/03 17:44:03 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	unsigned int	res;

	res = ft_str_is_lowercase("asadasfd");
	printf("Resultado 1: %d\n", res);

	res = ft_str_is_lowercase("da543assA");
	printf("Resultado 2: %d\n", res);

	res = ft_str_is_lowercase("1daa*ss.A");
	printf("Resultado 3: %d\n", res);

	res = ft_str_is_lowercase("");
	printf("Resultado 4: %d\n", res);

	return (0);
}
