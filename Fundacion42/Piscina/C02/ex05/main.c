/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:00:14 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/03 18:00:19 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	unsigned int	res;

	res = ft_str_is_uppercase("ASD SADY");
	printf("Resultado 1: %d\n", res);

	res = ft_str_is_uppercase("AA543assA");
	printf("Resultado 2: %d\n", res);

	res = ft_str_is_uppercase("1daa*ss.A");
	printf("Resultado 3: %d\n", res);

	res = ft_str_is_uppercase("");
	printf("Resultado 4: %d\n", res);

	return (0);
}	
