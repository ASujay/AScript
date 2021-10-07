#include "list.h"
#include <stdlib.h>

/* list function definitions */

void list_init(List *list){
  /* check if the list if empty or not */
  if(get_size(list) > 0){
    /* Empty the list */
    Node *start = list->first;
    while(start != NULL){
      list->first = start->next;
      free(start);
      start = list->first;
    }
  }

  /* Initialize the list */
  list->size = 0ul;
  list->first = NULL;
}

void add_node(List *list, Node *node){
  node->next = list->first;
  list->first = node;
}


Node *search_list(List *list, Node *node){
  
}

void delete_node(List *list, Node *node){


}

ul get_size(List *list){

}
