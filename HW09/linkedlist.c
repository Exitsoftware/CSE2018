#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  char id;
  int data;
  struct node * next;
} node;

node * head = NULL;

node *add_tail(node *q);
node *delete2(char id);
node *add_after(char id, node *q);
void nicely_print();

int main(void)
{
  node *n1, *n2, *n3, *n4, *n5;
  node *tmp;

  n1 = (node *) malloc (sizeof(node));
  n2 = (node *) malloc (sizeof(node));
  n3 = (node *) malloc (sizeof(node));
  n4 = (node *) malloc (sizeof(node));

  n1->id = 1;
  n1->data = 30;
  n2->id = 2;
  n2->data = 35;
  n3->id = 3;
  n3->data = 40;
  n4->id = 4;
  n4->data = 45;

  printf("------------ Add Node id 1 -------------\n");
  tmp = add_tail(n1);
  nicely_print();

  printf("\n------------ Add Node id 2 -------------\n");
  tmp = add_tail(n2);
  nicely_print();

  printf("\n------------ Add Node id 4 -------------\n");
  tmp = add_tail(n4);
  nicely_print();

  printf("\n------------ Add Node id 3 -------------\n");
  tmp = add_tail(n3);
  nicely_print();

  printf("\n------------ Delete Node id 3 ----------\n");
  delete2(3);
  nicely_print();

  printf("\n------------ Delete Node id 2 ----------\n");
  delete2(2);
  nicely_print();

  
  printf("\n------------ Add Node after id 1 ----------\n");
  n5 = (node *) malloc (sizeof(node));
  n5->id = 5;
  n5->data = 55;
  if(add_after(1, n5) == NULL)
    {
      fprintf(stderr, "Cannot found id 1\n");
    }
  else
    {
      nicely_print();
    }
  
}

node *add_tail(node *q)
{
  node *n = head;
  if(head == NULL){
    q -> next = NULL;
    head = q;
    // return n;
  }
  else{
    while(n -> next != NULL) n = n -> next;
    n -> next = q;
    q -> next = NULL;
  }
  return head;
  /* Write your codes */
}


node *delete2(char id)
{
  node *n = head;

  if(head -> id == id){
    head = head -> next;
  }
  else{
    while(n -> next != NULL){
      if(n -> next -> id == id){
        n -> next = n -> next -> next;
        break;
      }
      n = n -> next;
    }  
  }

  return NULL;
  /* Write your codes */
}

node *add_after(char id, node *q)
{
  node *n = head;
  while(n -> next != NULL){
    if(n -> id == id){
      q -> next = n -> next;
      n -> next = q; 
      return head;
    }
  }
    
  return NULL;
  /* Write your codes */
}

void nicely_print()
{
  node * tmp;
  printf("HEAD --->");
  for(tmp = head; tmp; tmp = tmp->next) printf("%8s%3d --->", "ID : ", tmp->id);
  printf("  TAIL(NULL)\n");
  printf("         ");
  for(tmp = head; tmp; tmp = tmp->next) printf("%8s%3d     ", "DATA : ", tmp->data);
  printf("\n\n");
}

