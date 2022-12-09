/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:10:18 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/12/08 18:29:56 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	unsigned int	result;

	result = 0;
	if (c >= 'A' && c <= 'Z')
	{
		result = 1;
	}
	else if (c >= 'a' && c <= 'z')
	{
		result = 1;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	int	alpha;

	alpha = ft_isalpha('f');
	printf("%d", alpha);
}
*/
