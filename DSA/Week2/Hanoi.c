#include <stdio.h>
#include <math.h>
void towerOfHanoi(int n, char source, char dest, char mid)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c", source, dest);
		return;
	}
	towerOfHanoi(n-1, source, mid, dest);
	printf("\n Move disk %d from rod %c to rod %c", n, source, dest);
	towerOfHanoi(n-1, mid, dest, source);
}

int main()
{
	int n;
	printf("Enter number of disks: ");
	scanf("%d",&n);
	towerOfHanoi(n, 'A', 'C', 'B'); 
	printf("\n Number of moves = %.0f",pow(2.0,n)-1);
	return 0;
}
