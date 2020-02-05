#include <stdio.h>
#include <stdlib.h>
main()
{
	int Q,vetX[10],vetY[10],i,j,vetS[10],ct=0,ca=0,cb=0,x,y,m,n,flag;
	scanf("%d",&Q);
	for(i=0; i<=Q-1; i++)
	{
		scanf("%d",&x);
	vetX[i]=x;
	ca++;
	}
	for(j=0; j<=Q-1; j++)
	{
		scanf("%d",&y);
	vetY[j]=y;
	cb++;
	}
	ct=ca+cb;
	m=0;
	n=0;
	for(i=0; i<=ct-1; i++)
	{
		if(flag==0 && m<ct)
		{
		vetS[i]=vetX[m];
		m++;
		flag=1;
		}
		else
		{
		vetS[i]=vetY[n];
		n++;
		flag=0;
		}
	}
	for(i=0; i<=ct-1; i++)
	{
		printf("%d ",vetS[i]);
	}
	system("pause");
}
