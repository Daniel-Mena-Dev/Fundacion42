/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:17:04 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/10/27 12:17:09 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char a);
void	ft_putchartwo(char a, char b);
void	ft_putcharthree(char a, char b, char c);
void	ft_putcharfour(char a, char b, char c, char d);
void	ft_putcharfive(char a, char b, char c, char d, char e);
void	ft_putcharsix(char a, char b, char c, char d, char e, char f);
void	ft_putcharseven(char a, char b, char c, char d, char e, char f, char g);
void	ft_putchareight(char a, char b, char c, char d, char e, char f, char g, char h);
void	ft_putcharnine(char a, char b, char c, char d, char e, char f, char g, char h, char i);
void	ft_comb_generic(int n);
void	ft_comb_generic_two(int n);
void	ft_onedigit(int n);
void	ft_twodigits(void);
void	ft_threedigits(void);
void	ft_fourdigits(void);
void	ft_fourdg_two(char f, char s, char t, char four);
void	ft_fivedigits(void);
void	ft_fivedg_two(char f, char s, char t, char four, char five);
void	ft_sixdigits(void);
void	ft_sixdg_two(char f, char t, char four, char five, char six);
void	ft_sevendigits(void);
void	ft_sevendg_two(char f, char s, char t, char four, char five, char six, char seven);
void	ft_eightdigits(void);
void	ft_eightdg_two(char f, char s, char t, char four, char five, char six, char seven, char eight);
void	ft_eightdg_three(char f,char s, char t, char four, char five, char six, char seven, char eight);
void	ft_ninedigits(void);
void	ft_ninedg_two(char f, char s, char t, char four, char five, char six, char seven, char eight, char nine);
void	ft_ninedg_three(char f, char s, char t, char four,char five, char six, char seven, char eight, char nine);

void	ft_print_combn(int n)
{
	if(n <= 0 && 10 <= n)
		write(1, "Solo admite numeros del 1 al 9", 31);
	ft_comb_generic(n);
}

void	ft_comb_generic(int n)
{
	while(0 < n < 10)
	{
		if(n == 1)
		{
			ft_onedigit(n);
		}
		else if(n == 2)
		{
			ft_twodigits();
		}
		else if (n == 3)
		{
			ft_threedigits();
		}
		ft_comb_generic_two(n);
	}
}

void	ft_comb_generic_two(int n)
{
		if (n == 4)
		{
			ft_fourdigits();
		}
		else if (n == 5)
		{
		ft_fivedigits();
		}
		else if (n == 6)
		{
			ft_sixdigits();
		}
		else if (n == 7)
		{
			ft_sevendigits();
		}
		else if (n == 8)
		{
			ft_eightdigits();
		}
		else
		{
			ft_ninedigits();
		}

}

void	ft_onedigit(int n)
{
	while(n <= 9)
		{
			ft_putchar(n + 48);
			n++;
		}
}

void	ft_twodigits(void)
{
    char	f;
	char	s;
	
	f = '0';
	while (f <= '8')
	{
		s = f + 1;
		while (s <= '9')
		{
			ft_putchartwo(f, s);
				if (f != '8')
				{
					ft_putchartwo(',', ' ');
				}
			
			s++;
		}
		f++;
	}
}

void	ft_threedigits(void)
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

void	ft_fourdigits(void)
{
    char	f;
	char	s;
	char	t;
    char	four;

	ft_fourdg_two(f, s, t, four);
}

void ft_fourdg_two(char f, char s, char t, char four)
{
    f = '0';
	while(f <= '6')
	{
		s = f + 1;
		while (s <= '7')
		{
				t = s + 1;
			while (t <= '8')
			{
				four = t + 1;
				while (four <= '9')
				{
					ft_putcharfour(f, s, t, four);
					if (f != '6')
					{
						ft_putchartwo(',', ' ');
					}
					four++;
				}
				t++;
			}
			s++;
		}
		f++;
	}
}

void	ft_fivedigits(void)
{
	char	f = '\0';
	char	s;
	char	t;
	char	four;
	char	five;

	f = '0';
	while(f <= '5')
	{
		s = f + 1;
		ft_fivedg_two(f, s , t, four, five);
		f++;
	}
}

void	ft_fivedg_two(char f, char s, char t, char four, char five)
{
    while(s <= '6')
		{
			t = s + 1;
	
			while (t <= '7')
			{
					four = t + 1;
				while (four <= '8')
				{
					five = four + 1;
					while (five <= '9')
					{
						ft_putcharfive(f, s, t, four, five);
						if (f != '5')
						{
							ft_putchartwo(',', ' ');
						}
						five++;
					}
					four++;
				}
				t++;
			}
			s++;
		}
}

void ft_sixdigits(char	f, char	s, char t, char four, char five, char six)
{
	/*char	f;
	char	s;
	char	t;
	char	four;
	char	five;
	char	six;*/

	f = '0';
	while(f <= '4')
	{
		s = f + 1;
		while(s <= '5')
		{
			t = s + 1;
			ft_sixdg_two(f, t, four, five, six);
			s++;
		}
		f++;
	}
}
void ft_sixdg_two(char f, char t, char four, char five, char six)
{
    while(t <= '6')
			{
			four = t + 1;
			while (four <= '7')
			{
				five = four + 1;
				while (five <= '8')
				{
					six = five + 1;
					while (six <= '9')
					{
						 ft_putcharsix(f, s, t, four, five, six);
						if (f != '4')
						{
							ft_putchartwo(',', ' ');
						}
						six++;
					}
					five++;
				}
				four++;
			}
			t++;
		}
}

void ft_sevendigits(void)
{
	char	f;
	char	s;
	char	t;
	char	four;
	char	five;
	char	six;
	char	seven;

	f = '0';
	while(f <= '3')
	{
		s = f + 1;
		while(s <= '4')
		{
			t = s + 1;
			while(t <= '5')
			{
				four = t + 1;
				ft_sevendg_two(f, s, t, four, five, six, seven);
				t++;
			}
			s++;
		}
		f++;
	}
}

void	ft_sevendg_two(char f, char s, char t, char four, char five, char six, char seven)
{
    while(four <= '6')
    {
		five = four + 1;
		while (five <= '7')
		{
			six = five + 1;
			while (six <= '8')
			{
				seven = six + 1;
				while (seven <= '9')
				{
					ft_putcharseven(f, s, t, four, five, six, seven);
					if (f != '3')
					{
						ft_putchartwo(',', ' ');
					}
					seven++;
				}
				six++;
			}
			five++;
		}
		four++;
	}
}

void ft_eightdigits(void)
{
	char	f;
	char	s;
	char	t;
	char	four;
	char	five;
	char	six;
	char	seven;
	char	eight;

	f = '0';
	while(f <= '2')
	{
		s = f + 1;
		while(s <= '3')
		{
			t = s + 1;
			ft_eightdg_two(f, s, t, four, five, six, seven, eight);
			s++;
		}
		f++;
	}
}

void	ft_eightdg_two(char f,char s, char t, char four, char five, char six, char seven, char eight)
{
    while(t <= '4')
	{
		four = t + 1;
		while(four <= '5')
		{
			five = four + 1;
			while(five <= '6')
			{
				six = five + 1;
				while (six <= '7')
				{
					seven = six + 1;
					ft_eightdg_three(f, s, t, four, five, six, seven, eight);
					six++;
				}
				five++;
			}
			four++;
		}
		t++;
	}
}

void	ft_eightdg_three(char f,char s, char t, char four, char five, char six, char seven, char eight)
{
    while (seven <= '8')
	{
		eight = seven + 1;
		while (eight <= '9')
		{
			ft_putchareight(f, s, t, four, five, six, seven, eight);
			if (f != '2')
			{
				ft_putchartwo(',', ' ');
			}
			eight++;
		}
		seven++;
	}
}

void ft_ninedigits(void)
{
	char	f;
	char	s;
	char	t;
	char	four;
	char	five;
	char	six;
	char	seven;
	char	eight;
    char	nine;

	f = '0';
    while(f <= '1')
    {
        s = f + 1;
		while(s <= '2')
		{
			t = s + 1;
			ft_ninedg_two(f, s, t, four, five, six, seven, eight, nine);
			s++;
		}
		f++;
	}
}

void	ft_ninedg_two(char f, char s, char t, char four, char five, char six, char seven, char eight, char nine)
{
    while(t <= '3')
			{
				four = t + 1;
				while(four <= '4')
				{
					five = four + 1;
					while(five <= '5')
					{
						six = five + 1;
						ft_ninedg_three(f, s, t, four, five, six, seven, eight, nine);
						five++;
					}
					four++;
				}
				t++;
			}
}
void	ft_ninedg_three(char f, char s, char t, char four, char five, char six, char seven, char eight, char nine)
{	
	while(six <= '6')
	{
		seven = six + 1;
		while (seven <= '7')
		{
			eight = seven + 1;
			while (eight <= '8')
			{
				nine = eight + 1;
				while (nine <= '9')
				{
					ft_putcharnine(f, s, t, four, five, six, seven, eight, nine);
					if (f != '1')
					{
						ft_putchartwo(',', ' ');
					}
					nine++;
				}
				eight++;
			}
			seven++;
		}
		six++;
	}
}
void	ft_putcharnine(char a, char b, char c, char d, char e, char f, char g, char h, char i)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
	write(1, &f, 1);
	write(1, &g, 1);
	write(1, &h, 1);
	write(1, &i, 1);
}
void	ft_putchareight(char a, char b, char c, char d, char e, char f, char g, char h)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
	write(1, &f, 1);
	write(1, &g, 1);
	write(1, &h, 1);
}
void	ft_putcharseven(char a, char b, char c, char d, char e, char f, char g)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
	write(1, &f, 1);
	write(1, &g, 1);
}
void	ft_putcharsix(char a, char b, char c, char d, char e, char f)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
	write(1, &f, 1);
}

void	ft_putcharfive(char a, char b, char c, char d, char e)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
}

void	ft_putcharfour(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_putcharthree(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putchartwo(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}
