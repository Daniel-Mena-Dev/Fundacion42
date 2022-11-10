/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:10:57 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/01 12:10:59 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	n1;
	int	n2;

	n1 = 7;
	n2 = 2;
	ft_ultimate_div_mod(&n1, &n2);
	printf("Division: %d - Resto: %d", n1, n2);
}
