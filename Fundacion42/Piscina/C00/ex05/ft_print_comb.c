/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:30:44 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/10/25 16:35:57 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putcharthree(char a, char b, char c);
void	ft_putchartwo(char a, char b);

void	ft_print_comb(void)
{
	char	f;
	char	s;
	char	t;

	f = '0';
	while (f <= '7')
	{
		s = f + 1;
		while (s <= '8')
		{
			t = s + 1;
			while (t <= '9')
			{
				ft_putcharthree(f, s, t);
				if (f != '7')
				{
					ft_putchartwo(',', ' ');
				}
				t++;
			}
			s++;
		}
		f++;
	}
}

void	ft_putcharthree(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_putchartwo(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}
