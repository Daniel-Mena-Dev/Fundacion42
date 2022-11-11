/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:52:27 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/10 18:52:29 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = argc - argc;
	while (argv[0][i] != '\0' && argc)
		write(1, &argv[0][i++], 1);
	write(1, "\n", 1);
	return (0);
}
