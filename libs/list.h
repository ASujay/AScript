#ifndef list_h_
#define list_h_

/* This is the interface for a generic linked list implementation. */

/* List node definition */

typedef unsigned long ul;

typedef struct Node{
  void *value;                              /* Can point to data of anytype */
  struct Node *next;
}Node;

Node *get_node(void *value, Node *next);

/* List definition */

typedef struct{
  Node *first;
  ul size;
}List;

void list_init(List *list);
void add_node(List *list, Node *node);
Node *search_list(List *list, Node *node);
void delete_node(List *list, Node *node);
ul get_size(List *list);



#endif
