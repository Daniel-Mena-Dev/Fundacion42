/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:41:29 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/01 12:41:37 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	longi;

	longi = 0;
	while (str[longi] != '\0')
	{
		longi++;
	}
	return (longi);
}
