#include <stdio.h>
main()
{
	int mat[10][10],i,j,k=0,ic1,ic2,nl,nc,vetp[10];
	printf("\nDigite valores para os elementos da matriz\n");
	
	printf("\ndigite o numero de linhas\n");
	scanf("%d",&nl);
	
	printf("\ndigite o numero de colunas\n");
	scanf("%d",&nc);
	
	printf("\ndigite um indice de coluna\n");
	scanf("%d",&ic1);
	
	printf("\ndigite outro indice de coluna\n");
	scanf("%d",&ic2);
	
	for(i=0; i<nl; i++)
		for(j=0; j<nc; j++)
		{
			printf("\nElemento[%d][%d] = ",i,j);
			scanf("%d",&mat[i][j]);
		}
		
	for(i=0; i<nl; i++)
	{
		for(j=ic1; j<=ic2; j++)
		{
			
			if((mat[i][j]%2)==0)
			{
				vetp[k]=mat[i][j];
				k++;
			}
			
		/*	if((mat[i][j]%2)==0)
			{
				vetp[k]=mat[i][j];
				k++;
			}*/
		}
	}
	
	for(i=0; i<nc; i++)
	{
		printf("%d ",vetp[i]);
	}
	
}
