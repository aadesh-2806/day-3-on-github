/*
find value from provided
Welcome
Enter no,of values=
5
enter value 1=21
enter value 2=45
enter value 3=78
enter value 4=34
enter value 5=098
write value to read=98
5

*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,m,n,s,a[200];
//	clrscr();
	printf("Welcome\nEnter no,of values=\n");
	scanf("%d" ,&n);
	i=0;
	while(i<n)
	{       printf("enter value %d=",i+1);
		scanf("%d", &a[i]);
		i=i+1;

	}

	printf("write value to read=");				//place value
	scanf("%d",&m);

				i=0;
				while(i<n)
				{
					if(m==a[i])
					{
						printf("%d",i+1);

					}
					i=i+1;
				}


return 0;
}
