#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}stack;

void create(stack **top)
{
    *top = NULL;
}
void push(stack **top,int element)
{
    stack *new;
    new = (stack *)malloc(sizeof(stack));
    if(new == NULL)
    {
        printf("Full Stack");
        exit(-1);
    }
    new->data = element;
    new->next = *top;
    *top = new;
}

int pop(stack **top)
{
    int t;
    stack *p;
    if(*top == NULL)
    {
        printf("Empty stack");
    }
    else
    {
        t = (*top)->data;
        p = *top;
        free(p);
        (*top) = (*top)->next;
        return t;
    }
}
int isempty(stack **top)
{
    if((*top)==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
void main()
{
    stack *A,*B;
    create(&A);
    create(&B);
    push(&A,5);
    push(&A,15);
    push(&A,95);
    push(&B,72);
    printf("%d %d %d/n",pop(&A),pop(&A),pop(&B));
    if(isempty(&B))
    {
        printf("B is empty");
    }

}