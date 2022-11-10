/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:54:45 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/02 19:54:48 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);
void	ft_putstr(char *str);
void    ft_putchar(char c);

int	main(void)
{
	char	dest[] = "Pe t";
	char	src[] = "kku";
	char	dest2[] = "Pe t";
	char	src2[] = "kku";

    //Aplicamos la funcion
	strcpy(dest2, src2);
    ft_strcpy(dest, src);
	printf(" Forma Orig -> ");
	printf("%s\n", dest2);
	


	/*Forma 1 de imprimir el resultado
	printf(" -> Forma 1");
    ft_putstr(dest);
	printf("\n");*/

	//Forma 2 de imprimir el resultado
    
	printf("Forma 2  -> ");
	printf("%s", dest);
    return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar (*str);
		str++;
	}
}	
