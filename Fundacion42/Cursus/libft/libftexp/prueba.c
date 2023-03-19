#include "libft.h"

/*
** Esta función crea un nuevo nodo utilizando malloc(3).
** La variable miembro 'content' se inicializa con el contenido del parámetro 'content'.
** La variable 'next' se inicializa con NULL.
** Devuelve el nuevo nodo.
*/
t_list *ft_lstnew(void *content)
{
    t_list *new_node;

    // Reservar memoria para el nuevo nodo
    new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return (NULL);
    
    // Asignar el contenido al miembro 'content' del nuevo nodo
    new_node->content = content;

    // Inicializar el miembro 'next' del nuevo nodo con NULL
    new_node->next = NULL;

    // Devolver el nuevo nodo
    return (new_node);
}
