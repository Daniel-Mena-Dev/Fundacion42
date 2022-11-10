/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:06:25 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/01 19:06:29 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	j;

	j = 0;
	while (j < size / 2)
	{
		temp = tab[j];
		tab[j] = tab[size - j - 1];
		tab[size - j - 1] = temp;
		j++;
	}
}
