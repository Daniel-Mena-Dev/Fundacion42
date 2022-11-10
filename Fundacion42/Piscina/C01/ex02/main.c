/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:22:48 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/10/30 12:22:50 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	n1;
	int	n2;

	n1 = 35;
	n2 = 100;
	printf(" PRE-Swap: n1=%d,n2=%d\n",n1,n2);
	ft_swap(&n1,&n2);
	printf("Post-Swap: n1=%d,n2=%d\n", n1,n2);
}
