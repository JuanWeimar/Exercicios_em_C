#include <stdio.h>
#include <stdlib.h>
main()
{
	int n,i,c=0,cc=0,v=1;
	scanf("%d",&n);
	while(n>cc)
	{
		if(n>0)
		{
			for(i=1; i<=(v/2); i++)
			{
				if(v%i==0)
				{
					c=c+i;
				}
			}
				if(v==c)
				{
					printf("%d ",v);
					cc++;
				}
			c=0;
			v++;
		}
	}
	system("pause");
}
