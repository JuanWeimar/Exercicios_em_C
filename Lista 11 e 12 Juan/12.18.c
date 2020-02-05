#include <stdio.h>
#include <stdlib.h>
main()
{
	int Q,R,vetA[10],vetB[10],vetI[10],q,r,i,j,ct=0,m=0,flag=0,k=0;
	scanf("%d",&Q);
	scanf("%d",&R);
	for(i=0; i<Q; i++)
	{
		scanf("%d",&q);
	vetA[i]=q;
	}
	for(i=0; i<R; i++)
	{
		scanf("%d",&r);
	vetB[i]=r;
	}
	if(Q<R)
	{
		for(i=0; i<Q; i++)
		{
			for(j=0; j<R; j++)
			{
				if(vetA[i]==vetB[j])
				{
				vetI[m]=vetA[i];
				m++;
				}
			}
		}
	}
	else
	{
		for(i=0; i<R; i++)
		{
			for(j=0; j<Q; j++)
			{
				if(vetB[i]==vetA[j])
				{
					vetI[m]=vetB[i];
					m++;
				}
			}
		}
	}
	for(i=0; i<m; i++)
	{
	printf("%d ",vetI[i]);
	}
}
