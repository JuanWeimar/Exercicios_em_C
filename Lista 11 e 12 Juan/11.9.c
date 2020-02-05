#include <stdio.h>
#include <stdlib.h>
main()
{
	int n,i,div,soma=0;
	scanf("%d",&n);
	while(n<0)
	{
	scanf("%d",&n);
	}
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			printf("%d ",i);
		}
	}
	system("pause");
}
