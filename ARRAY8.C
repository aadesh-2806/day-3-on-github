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
