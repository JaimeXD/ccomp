
#include <stdio.h>
#include <stdlib.h>
struct nodo
{
  int val;
  struct nodo *next;
};
int imprimir(head)
{
  struct nodo *t;
  t=head;
  while(t!='\0')
  {
    printf("%d",t->val);
    t=t->next;
  }
}
int crear(int n)
{
  struct nodo *head,*prev,*cur;
  int i;
  head =malloc(sizeof(struct nodo));
  head->val=1;
  prev=head;
  for(i=2;i<=n;i++)
  {
    cur=malloc(sizeof(struct nodo));
    cur->val=i;
    prev->next=cur;
    prev=cur;
  }
  prev->next='\0';
  imprimir(head);
 /*eliminar un nodo*/
  int key=2;
  prev = head;
  cur = head -> next; 
  while (cur != '\0') 
  {
      if (cur->val == key)
      {
          prev -> next = cur -> next;
          free(cur);
          break;
      }
      prev = cur;
      cur = cur -> next;
  }
}

main()
{
  int n=4;
  crear(n);
  
}