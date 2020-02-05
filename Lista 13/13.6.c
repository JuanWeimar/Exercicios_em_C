#include <stdio.h>
main()
{
	int mat[10][10],i,j,nl,nc,ac,al,vsl[10],vsc[10];
	printf("\nDigite valores para os elementos da matriz\n");
	
	printf("\ndigite o numero de linhas\n");
	scanf("%d",&nl);
	
	printf("\ndigite o numero de colunas\n");
	scanf("%d",&nc);
	
	for(i=0; i<nl; i++)
		for(j=0; j<nc; j++)
		{
			printf("\nElemento[%d][%d] = ",i,j);
			scanf("%d",&mat[i][j]);
		}
		
	for(i=0; i<nl; i++)
	{
		for(j=0; j<nc; j++)
		{
			al=al+mat[i][j];
		}
		vsl[i]=al;
		al=0;
	}
	
	for(j=0; j<nc; j++)
	{
		for(i=0; i<nl; i++)
		{
			ac=ac+mat[i][j];
		}
		vsc[j]=ac;
		ac=0;
	}
	
	for(i=0; i<nl; i++)
	{
		printf("Sl= %d ",vsl[i]);
	}
	
	printf("\n");
	
	for(i=0; i<nc; i++)
	{
		printf("Sc= %d ",vsc[i]);
	}
}
