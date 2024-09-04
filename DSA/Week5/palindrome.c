#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE 100
typedef struct 
{
	char arr[MAX_SIZE];
	int top;
}STACK;

void push(STACK *st,char s){
	if (st->top==MAX_SIZE-1)
		printf("\nStack Overflow!!\n");
	else
		st->arr[++(st->top)]=s;	
}


int pop(STACK *st){
	if (st->top==-1){
		printf("\nStack Underflow!!\n");
		return -1;
	}
	else
		return st->arr[(st->top)--];
}

int isPalin(STACK *stck,char str[]){
	int i=0;
	while(str[i]!='\0'){
		push(stck,str[i]);
		i=i+1;
	}
	for(i=0;i<strlen(str);i++){
		if(pop(stck)!=str[i])
			return 0;
	}
	return 1;
}

int main()
{
	STACK stck;
	stck.top=-1;
	char str[10];
	int i=0;
	printf("Enter a string: ");
	scanf("%s",str);
	if (isPalin(&stck,str))
		printf("PALINDROME");
	else
		printf("NOT PALINDROME");
	return 0;
}
/* OUTPUT
Enter a string: ())(
PALINDROME
*/