#include <stdio.h>
#include <stdlib.h>
main()
{
	int i,n,c=0;
	scanf("%d",&n);
	while(n<0)
	{
	scanf("%d",&n);
	}
		for(i=1; i<=n; i++)
		{
			if(n%i==0)
			{
				c++;
			}
		}
	if(n==1)
	{
		printf("Nao e primo\n");
	}
	if(c==2)
	{
		printf("E primo\n");
	}
	if(c>2)
	{
		printf("Nao e primo\n");
	}
	system("pause");
}
