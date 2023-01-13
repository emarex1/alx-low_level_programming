#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: pointer to head of the list
 * Return: sum of all nodes or 0
 **/

int sum_dlistint(dlistint_t *head);

{

    current = head;
    int sum = 0;
    while(current)
    {
       sum += current->data;
       current = current->next;
    }
    return(sum);
}
