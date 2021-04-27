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
