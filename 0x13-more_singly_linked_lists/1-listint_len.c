#include "lists.h"


/**

 * listint_len - returns the number of elements in a linked lists

 * @h: linked list of type listint_t to traverse

 *

 * Return: number of nodes

 */

size_t listint_len(const listint_t *h)

{

        size_t num = 0;


        while (h)

        {

                num++;

                h = h->next;

        }


        return (num);

}



















2-add_nodeint.c


#include "lists.h"


/**

 * add_nodeint - adds a new node at the beginning of a linked list

 * @head: pointer to the first node in the list

 * @n: data to insert in that new node

 *

 * Return: pointer to the new node, or NULL if it fails

 */

listint_t *add_nodeint(listint_t **head, const int n)

{

        listint_t *new;


        new = malloc(sizeof(listint_t));

        if (!new)

                return (NULL);


        new->n = n;

        new->next = *head;

        *head = new;


        return (new);

}
















3-add_nodeint_end.c


#include "lists.h"


/**

 * add_nodeint_end - adds a node at the end of a linked list

 * @head: pointer to the first element in the list

 * @n: data to insert in the new element

 *

 * Return: pointer to the new node, or NULL if it fails

 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{

        listint_t *new;

        listint_t *temp = *head;


        new = malloc(sizeof(listint_t));

        if (!new)

                return (NULL);


        new->n = n;

        new->next = NULL;


        if (*head == NULL)

        {

                *head = new;

                return (new);

        }


        while (temp->next)

                temp = temp->next;


        temp->next = new;


        return (new);

}





4-free_listint.c


#include "lists.h"


/**

 * free_listint - frees a linked list

 * @head: listint_t list to be freed

 */

void free_listint(listint_t *head)

{

        listint_t *temp;


        while (head)

        {

                temp = head->next;

                free(head);

                head = temp;

        }

}

