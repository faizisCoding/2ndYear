#include<stdio.h>
#include <string.h>

void copystring(char *str1,char *str2){
	if(*str1=='\0')
	{
	   *str2='\0';
	   return;
	}
	else{
		*str2=*str1;
	    copystring(++str1,++str2);
	}
}
int main(void)
{
	char s1[10], s2[10];
	printf("Enter String: ");
	scanf("%s",s1);
	copystring(s1,s2);
	printf("Entered string: %s\n",s1);
	printf("Copied string: %s",s2);
	return 0;


}