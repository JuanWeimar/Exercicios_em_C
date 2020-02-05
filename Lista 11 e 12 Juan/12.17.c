#include <stdio.h>
#include <stdlib.h>
main()
{
	int Q,R,vetA[10],vetB[10],vetU[10],q,r,i,j,ct=0,m,flag=0;
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
	for(i=0, j=0; i<Q; i++, j++)
	{
		vetU[j]=vetA[i];
		
	}
	
	for(i=0; j<(Q+R-ct); i++)
	{
		for(m=0; m<(Q+R); m++)
		{
			if(vetB[i]==vetU[m])
			{
				flag=1;
				ct++;
			//	break;
			}
		}
			if(flag==0)
			{
				vetU[j]=vetB[i];
				j++;
			}
			flag=0;
		}
	
	for(i=0; i<(Q+R-ct); i++)
	{
		printf("%d ",vetU[i]);
	}
	system("pause");
}
