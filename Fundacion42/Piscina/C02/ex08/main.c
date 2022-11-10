/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:04:43 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/03 19:04:46 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[] ="pinChE peloTuDo";

	ft_strlowcase(str);
	printf("Resultado -> ");
	printf("%s", str);
}

