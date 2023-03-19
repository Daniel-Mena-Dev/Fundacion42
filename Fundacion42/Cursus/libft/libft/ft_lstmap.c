/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:22:30 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/15 18:07:52 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Recorremos todos los nodos de la lista 'lst' y aplicamos la función
 * 'f' al contenido de cada nodo. Crea una lista del resultado de aplicar
 * sucesivamente la función. Se utilizará 'del' cuando sea necesario eliminar
 * el contenido de un nodo, por ejemplo, que no exista memoria suficiente
 * disponible o hay algún fallo al aplicar la función.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*final;
	t_list	*aux;

	final = 0;
	while (lst)
	{
		aux = ft_lstnew(f(lst->content));
		if (!aux)
		{
			ft_lstclear(&final, del);
			return (NULL);
		}
		ft_lstadd_back(&final, aux);
		lst = lst->next;
	}
	return (final);
}
