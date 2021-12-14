#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*l1,*l2;


void display(struct Node* head){
    while(head!=NULL){
        printf("%d\n",head->data);
        head=head->next;
    }
}

int main()
{
    struct Node *l1;
    struct Node *l2 = (struct Node *)malloc(sizeof(struct Node));;
    l1->data=4;
    l1->next=l2;
    l2->data=8;
    l2->next=NULL;

  

    display(l1);
  
    return 0;
}