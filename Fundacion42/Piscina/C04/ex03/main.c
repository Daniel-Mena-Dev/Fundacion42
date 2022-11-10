/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:15:14 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/09 16:15:18 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	int	rmy;

	rmy = ft_atoi("        --+--+--289drddddeedggrgdgdegdg3243566");
	printf ("rmy = %d\n", rmy);

	return (0);
}
