#include "libmx.h"

 void mx_push_front(t_list **list, void *data)
{
  t_list *f_list = mx_create_node(data);
  f_list->next = *list;
  *list = f_list; 
}
