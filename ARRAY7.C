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
	{       printf("enter value=");
		scanf("%d", &a[i]);
		i=i+1;

	}


			if(a[0]>a[1])								//to find max second max
			{
				m=a[0];
				s=a[1];
				i=2;
				while(i<n)
				{
					if(a[i]>s)
					{
						if(a[i]>m)
						{
							s=m;
							m=a[i];

						}
						else
						{
							s=a[i];
						}
					}
						i=i+1;
				}
			}
			else
			{       s=a[0];
				m=a[1];
				i=2;
				while(i<n)
				{
					if(a[i]>s)
					{
						if(a[i]>m)
						{
							s=m;
							m=a[i];

						}
					}
					else
					{
						s=a[i];
					}
						i=i+1;
				}

			}
			 printf("%d",s);
	return 0;

}
