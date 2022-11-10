/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:56:38 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/03 11:56:42 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	unsigned int	res;

	res = ft_str_is_alpha("daassA");
	printf("Resultado 1: %d\n", res);

	res = ft_str_is_alpha("da543assA");
	printf("Resultado 1,5: %d\n", res);

	res = ft_str_is_alpha("daa*ss.A");
	printf("Resultado 2: %d\n", res);

	res = ft_str_is_alpha("");
	printf("Resultado 3: %d\n", res);

	return (0);
}
