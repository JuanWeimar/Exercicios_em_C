#include <stdio.h>
#include <stdlib.h>
main()
{
	int qtf,i,qtfi,j,idade,sexo=0,flagidade=2,cId18=0,cId=0,cM18=0,idadeM=0,sexomasc;
	float resultado;
	scanf("%d",&qtf);
	for(i=0; i<qtf; i++)
	{
		scanf("%d",&qtfi);
		for(j=1; j<=qtfi; j++)
		{
			scanf("%d",&idade);
			scanf("%d",&sexo);
			if(idade>idadeM)
			{
				idadeM=idade;
				sexomasc=sexo;
			}
			if(idade>=18)
			{
				flagidade=1;
			}
			if(idade>=18 && sexo==1)
			{
				cId++;
				cM18=cM18+idade;
			}
		}
			if(sexomasc==1)
			{
				printf("masculino\n");
			}
			if(sexomasc==2)
			{
				printf("feminino\n");
			}
		sexomasc=0;
			if(flagidade==1)
			{
				cId18++;
			}
		flagidade=0;
	}
		resultado=(float)cM18/cId;
		printf("%d (qde de familias com filhos maiores de idade)\n",cId18);
		printf("%2.f (media de idade dos homens maiores de idade)\n",resultado);
		system("pause");
}
