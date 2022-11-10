/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:39:02 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/10/26 11:50:44 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putdigit(int a, int b);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 00;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putdigit(a, b);
			b++;
		}
		a++;
	}
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putdigit(int a, int b)
{
	char	afirst;
	char	asecond;
	char	bfirst;
	char	bsecond;

	afirst = (a / 10) + '0';
	asecond = (a % 10) + '0';
	bfirst = (b / 10) + '0';
	bsecond = (b % 10) + '0';
	write (1, &afirst, 1);
	write (1, &asecond, 1);
	ft_putchar(' ');
	write (1, &bfirst, 1);
	write (1, &bsecond, 1);
	ft_putchar(',');
	ft_putchar(' ');
}
