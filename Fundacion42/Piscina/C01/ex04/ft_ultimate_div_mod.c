/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:02:40 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/01 12:02:42 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempdiv;
	int	tempmod;

	tempdiv = *a / *b;
	tempmod = *a % *b;
	*a = tempdiv;
	*b = tempmod;
}
