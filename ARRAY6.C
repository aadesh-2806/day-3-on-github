#include<stdio.h>
#include<conio.h>
int main()
{
	int i,m,n,s,a[200];
	//clrscr();
	printf("Welcome\nEnter no,of values=\n");
	scanf("%d" ,&n);
	for(i=0; i<n; i=i+1)
	{       printf("enter value=");
		scanf("%d", &a[i]);
	}
																//to find min
			for(i=1,m=a[0]; i<n;i=i+1)
			{
			     if(a[i]>m)
			     {
					m=a[i];
			     }

			}

				for(s=1; s<=m; s=s+1)
			{

					for(i=0; i<n; i=i+1)
					{
						if(s<=a[i])
						{
							 printf("*");
						}
						else
						{
							printf(" ");
						}
					}
				printf("\n");
		     }
	return 0;


}
