/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:19:11 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/08 15:19:14 by dmena-ro         ###   ########.fr       */
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

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lng_d;
	unsigned int	lng_src;
	unsigned int	r;

	lng_d = ft_strlen(dest);
	lng_src = ft_strlen(src);
	if (size <= lng_d)
		return (lng_src + size);
	i = lng_d;
	j = 0;
	while (src[j] && j < ((size - lng_d - 1)))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	r = lng_src + lng_d;
	return (r);
}
