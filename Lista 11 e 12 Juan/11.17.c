#include <stdio.h>
#include <stdlib.h>
main()
{
	int etapas,i,j,trechos,km=0,tempo=0,tkm=0,tr50=0,ttemp=0,dist=1000000;
	scanf("%d",&etapas);
	for(i=1; i<=etapas; i++)
	{
		scanf("%d",&trechos);
		for(j=1; j<=trechos; j++)
		{
			scanf("%d",&km);
			scanf("%d",&tempo);
			if(km<50)
			{
				tr50++;
			}
			tkm=tkm+km;
			ttemp=ttemp+tempo;
		}
			if(tkm<dist)
			{
				dist=tkm;
			}
		printf("Etapa:%d %d (tempo total da etapa)\n",i,ttemp);
		ttemp=0;
		tkm=0;
	}
		printf("%d (trechos com menos de 50 km)\n",tr50);
		printf("%d (dist do perc da etapa mais curta)\n",dist);
		system("pause");
}
