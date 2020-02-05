#include <stdio.h>
#include <stdlib.h>
main()
{
	int n,i,c=0;
	do
	{
		scanf("%d",&n);
		if(n>0)
		{
			for(i=1; i<=(n/2); i++)
			{
				if(n%i==0)
				{
					c=c+i;
				}
			}
			if(n==c)
			{
				printf("%d e perfeito\n",n);
			}
			else
			{
				printf("%d nao e perfeito\n",n);
			}
		}
		c=0;
	}
	while(n>0);
	system("pause");
}
