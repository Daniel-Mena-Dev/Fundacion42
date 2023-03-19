/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:28:09 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/14 19:26:23 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * El objectivo es enviar el string 's' junto con un salto de linea al file 
 * descriptor especificado.
*/
void	ft_putendl_fd(char *s, int fd)
{
	char	final;

	final = '\n';
	write(fd, s, ft_strlen(s));
	write(fd, &final, 1);
}
