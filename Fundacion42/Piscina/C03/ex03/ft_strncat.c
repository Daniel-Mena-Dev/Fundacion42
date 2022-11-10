/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 02:41:35 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/08 02:41:43 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	siz(char *cadena)
{
	int	i;

	i = 0;
	while (cadena[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = siz(dest);
	while (src[i] != '\0' && nb)
	{
		dest[j] = src[i];
		j++;
		i++;
		if (nb == i)
			break ;
	}
	dest[j] = '\0';
	return (dest);
}