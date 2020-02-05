#include <stdio.h>
#include <stdlib.h>
int ehprimo(int i);
main()
{
	int n1,n2,i,j,c=0;
	scanf("%d",&n1);
	scanf("%d",&n2);
	while(n1>n2)
	{
		scanf("%d",&n1);
		scanf("%d",&n2);
	}
	for(i=n1; i<=n2; i++)
	{
			
			if(ehprimo(i)==1)
			{
				printf("%d ",i);
			}
	}
	system("pause");
}




int ehprimo(int i)
{
	int j,c=0;
	for(j=1; j<=i; j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
			if(c==2)
				return 1;
			
			else
				return 0;
}
