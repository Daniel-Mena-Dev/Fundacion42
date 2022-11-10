/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:40:07 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/01 18:49:05 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str);


int	main(void)
{
	int	longitud;

	longitud = ft_strlen("12d fdsfd89");
	printf("Tiene: %d caracteres", longitud);
}
