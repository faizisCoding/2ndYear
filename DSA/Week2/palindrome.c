#include<stdio.h>
#include<string.h>
int ispalin(char *s,int len){
	if(*s=='\0')
	{
		return 1;
	}
	if(*s!=*(s+len-1))
	{
		return 0;
	}
	else return 1;
	ispalin(++s,--len);
}
void main(){
	char str[10];
	printf("Enter string: ");
	scanf("%s",str);
	int l=strlen(str);
	if ((ispalin(str,l))==0){
		printf("Entered string is not palindrome.");
	}
	else printf("Entered string is palindrome.");
}
