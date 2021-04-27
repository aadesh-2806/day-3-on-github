/*
find no of repetition of a number in array

Welcome
Enter no,of values=
8
enter value 1=23
enter value 2=567
enter value 3=12
enter value 4=76
enter value 5=12
enter value 6=76
enter value 7=12
enter value 8=89
write value to read=12
3
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,m,n,s,x,a[200];
	//clrscr();
	printf("Welcome\nEnter no,of values=\n");
	scanf("%d" ,&n);

	i=0;
	while(i<n)
	{       printf("enter value %d=",i+1);
		scanf("%d", &a[i]);
		i=i+1;

	}

	printf("write value to read=");						//value to read and its total no of values
	scanf("%d",&m);

				i=0;
				s=1;
				while(i<n)
				{
					if(m==a[i])
					{
						x=s;
				        s++;
					}
					i=i+1;
				}
			       printf("%d",x);

	return 0;
}
