#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	char name[20];
	int roll_no;
	float cgpa;
}Student;

void read(Student *s,int i){
	printf("Enter the details of student:%d\n");
	printf("Enter name:");
	getchar();
	gets(s[i].name);
	printf("Enter roll_no:");
	scanf("%d",&s[i].roll_no);
	printf("Enter cgpa:");
	scanf("%f",&s[i].cgpa);
	printf("\n");
}

void display(Student *s,int i){
	printf("The details of student %d:\n",i+1);
	printf("Name:%s\n",s[i].name);
	printf("Roll_no:%d\n",s[i].roll_no);
	printf("Cgpa:%.2f\n",s[i].cgpa);
	printf("\n");
}

void sort(Student *s,int n){
	int i,j;
	for(i=0;i<n;i++){
		Student temp;
		for(int j=0;j<=n-i-1;j++){
			if(s[j].roll_no>s[i].roll_no){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
}

int main()
{
	int n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	printf("\n");
	Student *s=calloc(n,sizeof(Student));
	int i;
	for(i=0;i<n;i++)
		read(s,i);
	sort(s,n);
	printf("The details of students:\n");
	for(i=0;i<n;i++)
	    display(s,i);
	return 0;
}
/*OUTPUT
Enter number of students: 2

Enter the details of student 1:
Enter name:Pai
Enter roll_no:3
Enter cgpa:9.99

Enter the details of student 2:
Enter name:NotPai
Enter roll_no:1
Enter cgpa:8.99

The details of students:
The details of student 1:
Name:NotPai
Roll_no:1
Cgpa:8.99

The details of student 2:
Name:Pai
Roll_no:3
Cgpa:9.99*/