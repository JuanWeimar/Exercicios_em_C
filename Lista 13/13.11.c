#include <stdio.h>
main()
{
	int mat[10][10],i,j,nl,nc,aux;
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
		
	for(j=0; j<nc; j=j+2)
	{
		for(i=0; i<nl; i++)
		{
			aux=mat[i][j];
			mat[i][j]=mat[i][j+1];
			mat[i][j+1]=aux;
		}
	}
	
	printf("\nMatriz modificada\n");
	for(i=0; i<nl; i++)
	{
		for(j=0; j<nc; j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}
