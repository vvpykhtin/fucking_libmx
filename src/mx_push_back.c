#include "libmx.h"
void mx_push_back(t_list **list, void *data)
{
  t_list *listback = mx_create_node(data);
  t_list *temp = *list;
  while(temp->next != NULL)
    temp = temp ->next;
  temp->next = listback;
}
