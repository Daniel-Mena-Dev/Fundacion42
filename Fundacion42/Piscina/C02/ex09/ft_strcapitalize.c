/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:15:45 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/03 19:15:47 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	unsigned int	sig;

	i = 0;
	sig = 1;
	while (str[i] != '\0')
	{
		if (sig == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (sig == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A'))
			sig = 1;
		else if ((str[i] > 'Z' && str[i] < 'a') || str[i] > 122)
			sig = 1;
		else
			sig = 0;
		i++;
	}
	return (str);
}
