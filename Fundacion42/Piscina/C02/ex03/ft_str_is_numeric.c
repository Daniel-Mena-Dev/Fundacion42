/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:06:49 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/03 17:06:52 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0' )
	{
		if (0 <= str[i] && str[i] < 47)
		{
			result = 0;
			break ;
		}
		else if (57 < str[i] && str[i] <= 127)
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
