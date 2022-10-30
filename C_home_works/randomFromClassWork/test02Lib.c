#include"test02H.h"
 
stack * init()
{
    
    stack * currentNode =(stack*)malloc(sizeof(stack));
    currentNode->top=NULL;
 
    return currentNode;
}
 
void push(struct stack * currentStack,int data)
{
    struct node * tmp = (node*)malloc(sizeof(node));
    tmp->data=data;

    if(currentStack->top==NULL)
    {
        currentStack->top=tmp;
        tmp->prev=NULL;
 
        return;
    }

    tmp->prev=currentStack->top;
    currentStack->top=tmp;
}
 
void pop(struct stack * currentStack)
{
   struct node * tmp = currentStack->top;

    if(currentStack==NULL)
    {
        printf("The stack is empty");
        return;
    }

    currentStack->top=tmp->prev;
    free(tmp);
}
// int pop(struct Stack * currentStack){
//    struct stackNode * tmp = currentStack->top;
//     if(currentStack->top==NULL){
//         printf("The stack is empty");
//         exit(0);
//     }
//     currentStack->top=tmp->prev;
//     return tmp->data;
//     free(tmp);
// }

 
void display(struct stack * currentStack)
{
   struct node * tmp = currentStack->top;
   
    while(tmp!=NULL)
    {
        printf("%d ",tmp->data);
        tmp=tmp->prev;
    }
    printf("\n");
}