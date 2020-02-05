#include <stdio.h>
main()
{
	int mat[10][10],i,j,nl,nc,ac,al,vsl[10],vsc[10],menorvalor;
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
		menorvalor=mat[i][0];
		for(j=0; j<nc; j++)
		{
			if(mat[i][j]<menorvalor)
			{
			menorvalor=mat[i][j];
			}
		}

	
	for(j=0; j<nc; j++)
	{
		mat[i][j]=mat[i][j]/menorvalor;
	}
	}
	
	for(i=0; i<nl; i++)
	{
		for(j=0; j<nc; j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
}
