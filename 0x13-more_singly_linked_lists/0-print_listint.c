#include "lists.h"

/**
 * print_listint - prints a linked list
 * @h: the head of the linked list
 * Return: the length of the string
 */
size_t print_listint(const listint_t *h)
{
register int len = 0;

while (h)
{
(!h->n)
? printf("null\n");
      	: printf("%d\n", h->n);  
      	h = h->next;
       	len++;
}
return (len);
}
