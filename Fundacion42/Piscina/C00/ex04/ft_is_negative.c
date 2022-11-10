/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:21:18 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/10/24 18:29:39 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	pos;
	char	neg;

	pos = 'P';
	neg = 'N';
	if (n > 0)
	{
		write(1, &pos, 1);
	}
	else if (n < 0)
	{
		write(1, &neg, 1);
	}
	else
	{
		write(1, "El numero es un... ¡CERO!", 27);
	}
}
