#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int date;
	int *month;
	int year;
}DOB;

typedef struct
{
	int reg_no;
	char *name;
	char address[50];
}STU_INFO;

typedef struct
{
	char *college_name;
	char uni_name[50];
}COLLEGE;

typedef struct
{
	DOB *dob;
	STU_INFO info;
	COLLEGE col;
}STUDENT;

int main()
{
	STUDENT *s=calloc(1,sizeof(STUDENT));
    s->dob=calloc(1,sizeof(DOB));
    s->dob->month=calloc(1,sizeof(int));
    s->info.name=calloc(50,sizeof(char));
    s->col.college_name=calloc(50,sizeof(char));
	printf("Enter Date of birth(dd mm yy): ");
	scanf("%d%d%d",&s->dob->date,s->dob->month,&s->dob->year);
	printf("Enter registration number: ");
	scanf("%d",&s->info.reg_no);
	printf("Enter name: ");
	scanf("%s",s->info.name);
	printf("Enter address: ");
	scanf("%s",s->info.address);
	printf("Enter college name: ");
	scanf("%s",s->col.college_name);
	printf("Enter University name: ");
	scanf("%s",s->col.uni_name);

	printf("\nThe details are:\n");
	printf("Date of birth: %d-%d-%d\n",s->dob->date,*(s->dob->month),s->dob->year);
	printf("Registration number: %d\n",s->info.reg_no);
	printf("Name: %s\n",s->info.name);
	printf("Address: %s\n",s->info.address);
	printf("College name: %s\n",s->col.college_name);
	printf("University name: %s\n",s->col.uni_name);

	return 0;
}
/*OUTPUT
Enter Date of birth(dd mm yy): 12 12 2012
Enter registration number: 232133 
Enter name: ABCD
Enter address: Delhi    
Enter college name: MIT
Enter University name: MAHE

The details are:
Date of birth: 12-12-2012
Registration number: 232133
Name: ABCD
Address: Delhi
College name: MIT
University name: MAHE*/