#include <stdio.h>
#include <stdlib.h>
main()
{
	int Q,R,vetA[10],vetB[10],vetS[10],i,a,b,j,cod,ca=0,cb=0,ct=0;
	scanf("%d",&Q);
	scanf("%d",&R);
	for(i=0; i<=Q-1; i++)
	{
		scanf("%d",&a);
	vetA[i]=a;
	ca++;
	}
	for(j=0;j<=R-1; j++)
	{
		scanf("%d",&b);
	vetB[j]=b;
	cb++;
	}
	printf("digite 1.Vetor A antes B 2.Vetor B antes de A 3.Fim\n");
	scanf("%d",&cod);
	ct=(ca)+(cb);
	while(cod==1 || cod==2)
	{
		if(cod==1)
		{
			for(i=0; i<=ca-1; i++)
			{
			vetS[i]=vetA[i];
			//printf("%d ",vetS[i]);
			}
			for(j=ca; j<=ct-1; j++)
			{
			vetS[j]=vetB[j-4];
			//printf("%d ",vetS[j]);
			}
			for(i=0; i<=ct-1; i++)
			printf("%d ",vetS[i]);
		}
		if(cod==2)
		{
			for(i=0; i<=cb-1; i++)
			{
			vetS[i]=vetB[i];
			//printf("%d ",vetS[i]);
			}
			for(j=cb; j<=ct-1; j++)
			{
			vetS[j]=vetA[j-5];
			//printf("%d ",vetS[j]);
			}
			for(i=0; i<=ct-1; i++)
			printf("%d ",vetS[i]);
		}
		printf("\ndigite 1.Vetor A antes B 2.Vetor B antes de A 3.Fim\n");
		scanf("%d",&cod);
	}

}
