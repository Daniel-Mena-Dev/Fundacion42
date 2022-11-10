/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:15:56 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/03 19:15:58 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] ="pinChE peloTuDo Ads aws -sg";

	ft_strcapitalize(str);
	printf("Resultado -> ");
	printf("%s", str);
}
