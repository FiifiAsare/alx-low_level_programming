#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of a list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;
while ( != NULL)
{
h = h->next;
nnodes++;
}
return (nnodes);
}
