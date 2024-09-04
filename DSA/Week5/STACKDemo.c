#include<stdio.h>
#define MAX_SIZE 10
typedef struct{
   char arr[10];
   int top;
} Stack;
int isFull(Stack *stack){
   return(stack->top==MAX_SIZE-1);
}
int isEmpty(Stack *stack){
   return(stack->top==-1);  
}
void initialize(Stack *stack) {
   stack->top=-1;  
}
void push(Stack *stack, int value){
    if (isFull(stack)){
        printf("Stack Overflow\n");
        return;
    }
    stack->arr[++stack->top]=value;
    printf("Pushed %c onto the stack\n",value);
}
char pop(Stack *stack){
    if (isEmpty(stack)){
        printf("Stack Underflow\n");
        return '\0';
    }
    return stack->arr[stack->top--];
}
int peek(Stack *stack){
    if(isEmpty(stack)){
        printf("Stack is empty\n");
        return -1;
    }
    return stack->arr[stack->top];
}
int main(){
    Stack stack;
    initialize(&stack); 
    push(&stack,'a');
    printf("Top element:%c\n",peek(&stack));
    push(&stack,'b');
    printf("Top element:%c\n",peek(&stack));
    push(&stack,'c');
    printf("Top element:%c\n",peek(&stack));
    push(&stack,'d');
    printf("Top element:%c\n",peek(&stack));
    push(&stack,'e');
    printf("Top element:%c\n",peek(&stack));
    while (!isEmpty(&stack)){
        printf("Top element: %c\n", peek(&stack));
        printf("Popped element: %c\n", pop(&stack));
    }
    return 0;
}
/* OUTPUT
Pushed a onto the stack
Top element:a
Pushed b onto the stack
Top element:b
Pushed c onto the stack
Top element:c
Pushed d onto the stack
Top element:d
Pushed e onto the stack
Top element:e
Top element: e
Popped element: e
Top element: d
Popped element: d
Top element: c
Popped element: c
Top element: b
Popped element: b
Top element: a
Popped element: a 
*/



