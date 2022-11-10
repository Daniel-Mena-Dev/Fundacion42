/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:29:11 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/03 18:29:14 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[] ="pinChE peloTuDo";

	ft_strupcase(str);
	printf("Resultado -> ");
	printf("%s", str);
}
