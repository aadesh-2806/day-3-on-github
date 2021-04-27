/*
reverse the given array
Welcome
Enter no,of values=
5
enter value 1=23
enter value 2=45
enter value 3=12
enter value 4=89
enter value 5=45
45  23  45  12  89
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,m,n,s,a[200];
	//clrscr();
	printf("Welcome\nEnter no,of values=\n");
	scanf("%d" ,&n);

	i=0;
	while(i<n)
	{       printf("enter value %d=",i+1);
		scanf("%d", &a[i]);
		i=i+1;										//reverse array

	}
		i=n-1;
		printf("%d  ",a[i]);

				i=0;
				while(i<n-1)
				{
					printf("%d  ",a[i]);
					i=i+1;
				}


	return 0;
}
