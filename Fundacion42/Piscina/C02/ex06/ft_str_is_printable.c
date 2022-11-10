/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:13:58 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/11/03 18:14:02 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 1;
	while (str[i] != '\0')
	{
		if (0 <= str[i] && str[i] < 32)
		{
			result = 0;
			break ;
		}	
		else if (127 == str[i])
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
