/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:52:21 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/02 13:52:23 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {56, 2, 3, 4, 6};
	int	lon;
	int	i;
	int	j;

	lon = 5;
	i = 0;
	j = 0;
	printf("\nLa cadena sin ordenar: ");
	while (i <= lon -1)
	{
		printf("%d", tab[i]);
		if (i != lon - 1)
			printf(", ");
		else
			printf (".");
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab, lon);
	printf("La cadena ordenada: ");
	while (j <= lon -1)
	{
		printf("%d", tab[j]);
		if (j != lon - 1)
			printf(", ");
		else
			printf (".");
		j++;
	}
	return (0);
}
