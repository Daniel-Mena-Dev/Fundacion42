/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:35:56 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/26 19:08:23 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	c = n % 10 + '0';
	write(fd, &c, 1);
}

/*
Supongamos que se llama a la función ft_putnbr_fd(159, 1).

La función comprueba que el número es positivo, por lo que 
no se escribe ningún signo negativo.

La función comprueba que el número tiene más de un dígito, 
por lo que se llama a la función recursiva ft_putnbr_fd(15, 1).

La función recursiva ft_putnbr_fd(15, 1) se llama con el número 15,
comprueba que el número es positivo, por lo que no escribe ningún 
signo negativo, y comprueba que el número tiene más de un dígito, 
por lo que llama a la función recursiva ft_putnbr_fd(1, 1).

La función recursiva ft_putnbr_fd(1, 1) se llama con el número 1,
comprueba que el número es positivo, por lo que no escribe ningún
signo negativo, y comprueba que el número no tiene más de un dígito,
por lo que simplemente escribe el carácter '1' en el descriptor de
archivo especificado.
	
La función ft_putnbr_fd(15, 1) vuelve a su punto de llamada anterior,
 obtiene el último dígito del número original (5), lo convierte en su
 representación de carácter ASCII ('5') y lo escribe en el descriptor
  de archivo especificado.Es decir,  se obtiene el último dígito del
   número original tomando el módulo del número original con 10, es decir,
    se calcula n % 10. El resultado será el último dígito del número original.
	
La función ft_putnbr_fd(159, 1) vuelve a su punto de llamada anterior, 
obtiene el último dígito del número original (9), lo convierte en su 
representación de carácter ASCII ('9') y lo escribe en el descriptor 
de archivo especificado.
*/

/*
hace la parte del módulo porque al volver de la recursividad ya 
no está en el if?, 
por eso mientras va volviendo a cuando es n=15 y n=159 va directamente 
a la parte de:  c = n % 10 + '0';? 
Sí, exactamente. Después de que la recursión termine y la función
 empiece a 
"desenrollar" las llamadas recursivas, se llegará a un punto en el
 que n tendrá 
solamente un dígito. En ese momento, se calculará el valor de c 
como el módulo de 
n entre 10, que es el último dígito, y se escribirá en el file descriptor. 
Esto se hace en la línea c = n % 10 + '0'; write(fd, &c, 1);.

Es importante destacar que la recursión no se ejecuta en paralelo, sino
 que se va 
"desenrollando" en reversa, por lo que la última llamada recursiva es la primera 
en ser resuelta y la primera llamada recursiva es la última en ser resuelta. 
De esta forma, se logra imprimir los dígitos del número en orden inverso, 
ya que se escriben en el file descriptor en el orden en que se resuelven 
las llamadas recursivas.
*/

/*
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	 char c;
	  // Se declara una variable para 
	  almacenar el carácter actual que se va a imprimir

    if (n < 0) 
	// Si el número es negativo, se imprime el 
	signo negativo y se convierte a positivo
    {
        write(fd, "-", 1);
		 // Se escribe el signo negativo en el file descriptor
        n = -n; 
		// Se convierte el número a su valor absoluto
    }
    if (n >= 10) 
	// Si el número tiene más de un dígito, se llama a la 
	función de forma recursiva para imprimir los dígitos restantes
    {
        ft_putnbr_fd(n / 10, fd);
		 // Se divide el número entre 10 para obtener el siguiente dígito
    }
    c = n % 10 + '0'; 
	// Se obtiene el último dígito del número y se convierte
	 a su representación de carácter ASCII
    write(fd, &c, 1); 
	// Se escribe el carácter en el file descriptor
}
*/