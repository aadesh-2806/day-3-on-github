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
