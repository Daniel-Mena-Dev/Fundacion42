/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:17:44 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/14 19:27:46 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * El objectivo es enviar el string 'st' al file descriptor especificado.
*/
#include "libft.h"

void	ft_putstr_fd(char *st, int fd)
{
	write(fd, st, ft_strlen(st));
}
