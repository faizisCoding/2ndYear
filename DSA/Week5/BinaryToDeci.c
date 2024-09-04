#include <stdio.h>
#define MAX 20

typedef struct{
	int arr[MAX];
	int top;
}Stack;

void push(Stack *s,int num){
	(s->top)++;
	s->arr[s->top]=num;
}
int pop(Stack *s){
	int c=s->arr[s->top];
	(s->top)--;
	return c;
}
int main(){
	int num;
	printf("Enter the decimal number:");
	scanf("%d",&num);
	Stack s;
	s.top=-1;
	while(num!=0){
	  int temp=num%2;
	  push(&s,temp);
	  num=num/2;
	}
	printf("Binary value is: ");
	while(s.top!=-1){
	   printf("%d",pop(&s));
	}
	return 0;
}
/* OUTPUT
Enter the decimal number: 80085
Binary value is: 10011100011010101
*/