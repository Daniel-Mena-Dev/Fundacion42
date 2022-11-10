/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:58:19 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/10/28 13:58:26 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	*********nbr;
	int	********nbr8;
	int	*******nbr7;
	int	******nbr6;
	int	*****nbr5;
	int	****nbr4;
	int	***nbr3;
	int	**nbr2;
	int	*nbr1;
	int	valor;

    valor = 1515;
	nbr1 = &valor;
    nbr2 = &nbr1;
    nbr3 = &nbr2;
    nbr4 = &nbr3;
    nbr5 = &nbr4;
    nbr6 = &nbr5;
    nbr7 = &nbr6;
    nbr8 = &nbr7;
    nbr = &nbr8;

	ft_ultimate_ft(&nbr8);
    printf("%d\n", *nbr1);
	printf("%i\n", ****nbr4);
	printf("%i\n", valor);
}

