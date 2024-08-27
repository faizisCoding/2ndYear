#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int date;
	int month;
	int year;
}DOB;

typedef struct{
	int h_no;
	int zip_code;
	char state[50];
}address;

typedef struct{
	char name[50];
	DOB date;
	address ad;
}employee;


int main(){
	int n;
	printf("Enter number of employees: ");
	scanf("%d",&n);
	employee *e=calloc(n,sizeof(employee));
	printf("Enter details of employee: \n");
	int i;
	for(i=0;i<n;i++){
	  printf("Enter details of employee %d\n",i+1);
	  printf("Enter name: ");
	  getchar();
	  gets(e[i].name);
	  printf("Enter date of birth(in dd mm yy): ");
	  scanf("%d%d%d",&e[i].date.date,&e[i].date.month,&e[i].date.year);
	  printf("Enter house number: ");
	  scanf("%d",&e[i].ad.h_no);
	  printf("Enter zip code: ");
	  scanf("%d",&e[i].ad.zip_code);
	  printf("Enter state: ");
	  scanf("%s",e[i].ad.state);
	}
	printf("\nThe details are:\n");
	for(i=0;i<n;i++){
	  printf("\nDetails of employee %d\n",i+1);
	  printf("Name: %s\n",e[i].name);
	  printf("Date of birth: %d - %d - %d\n",e[i].date.date,e[i].date.month,e[i].date.year);
	  printf("House number: %d\n",e[i].ad.h_no);
	  printf("Zip code: %d\n",e[i].ad.zip_code);
	  printf("State: %s\n",e[i].ad.state);
	}

	return 0;
}
/* OUTPUT:
Enter number of employees: 2
Enter details of employee: 
Enter details of employee 1
Enter name: Obama
Enter date of birth(in dd mm yy): 21 3 2005
Enter house number: 3432
Enter zip code: 344533
Enter state: Ohio
Enter details of employee 2
Enter name: Cena
Enter date of birth(in dd mm yy): 4 5 2001
Enter house number: 3244
Enter zip code: 344533
Enter state: NY

The details are:

Details of employee 1
Name: Obama
Date of birth: 21 - 3 - 2005
House number: 3432
Zip code: 344533
State: Ohio

Details of employee 2
Name: Cena
Date of birth: 4 - 5 - 2001
House number: 3244
Zip code: 344533
State: NY*/