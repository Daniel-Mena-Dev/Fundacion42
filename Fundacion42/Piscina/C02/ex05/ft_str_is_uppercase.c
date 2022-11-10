/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:59:45 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/03 17:59:48 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] < 65)
		{
			result = 0;
			break ;
		}	
		else if (90 < str[i] && str[i] <= 127)
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
