#include <stdio.h>
#include <stdlib.h>
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
		for(j=1; j<=i; j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		j--;
			if(c==2)
			{
				printf("%d ",j);
			}
		c=0;
	}
	system("pause");
}
