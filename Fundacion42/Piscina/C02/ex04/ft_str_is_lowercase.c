/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:43:50 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/03 17:43:53 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (0 <= str[i] && str[i] < 97)
		{
			result = 0;
			break ;
		}	
		else if (122 < str[i] && str[i] <= 127)
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
