/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:24:10 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/02 18:24:13 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = i + 1;
	while (i < size - 1)
	{
		if (tab[i] > tab[j])
		{
			temp = tab[i];
			tab [i] = tab[j];
			tab [j] = temp;
			i = 0;
			j = 1;
		}
		else
		{
			i++;
			j++;
		}
	}
}
