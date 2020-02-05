#include <stdio.h>
#include <stdlib.h>
main()
{
	int Q,vetB[10],i,p,ct=0,ca=0,cx=0,x,y,m=0,n,q,aux;
	scanf("%d",&Q);
	for(i=0; i<=Q-1; i++)
	{
		scanf("%d",&q);
	vetB[i]=q;
	}
	scanf("%d",&x);
	cx++;
	do{
	scanf("%d",&p);
	}
	while(p<0 || p>Q);
	for(i=Q; i>=p; i--)
	{
		vetB[i]=vetB[i-1];
		if(i==p)
		vetB[i]=x;
	}
	
	for(i=0; i<=Q; i++)
	{
	printf("%d ",vetB[i]);
	}
	system("pause");
}
	
