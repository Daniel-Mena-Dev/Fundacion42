/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:28:15 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/10/23 23:28:19 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_putchar(char c);
void	top(int pos, int x);
void	middle(int pos, int total, int x);
void	bottom(int pos, int x, int total);

void	rush(int x, int y)
{
	int	pos;
	int	total;

	pos = 0;
	total = x * y;
	while (x > 0 && y > 0 && pos <= total - 1)
	{
		if (pos % x == 0 && pos != 0)
		{
			ft_putchar(10);
		}
		top(pos, x);
		middle(pos, total, x);
		bottom(pos, x, total);
		pos++;
	}
}

void	top(int pos, int x)
{
	if (pos == 0)
	{
		ft_putchar('o');
	}
	else if (pos > 0 && pos < x - 1)
	{
		ft_putchar('-');
	}
	else if (pos == x - 1)
	{
		ft_putchar('o');
	}
}

void	middle(int pos, int total, int x)
{
	if (pos > x - 1 && pos < total - x)
	{
		if (pos % x == 0)
		{
			ft_putchar('|');
		}
		else if ((pos - (x - 1)) % x == 0)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}

void	bottom(int pos, int x, int total)
{
	if (total - x == pos)
	{
		ft_putchar('o');
	}
	else if (pos > total - x && pos < total - 1)
	{
		ft_putchar('-');
	}
	else if (pos == total - 1)
	{
		ft_putchar('o');
	}
}
