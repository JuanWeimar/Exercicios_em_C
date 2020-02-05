#include <stdio.h>
main()
{
	int i,j,mat[4][4],sl2=0,c1=0,dgp=0,dgs=0,som=0;
	
	printf("\nDigite valores para os elementos da matriz\n");
	
	for(i=0; i<4; i++)
		for(j=0; j<4; j++)
		{
			printf("\nElemento[%d][%d] = ",i,j);
			scanf("%d",&mat[i][j]);
		}
	
	for(i=0; i<4; i++)
		for(j=0; j<4; j++)
		{
			if(i==2)
			{
			sl2=sl2+mat[i][j];
			}
			if(j==1)
			{
			c1=c1+mat[i][j];
			}
			if(i==j)
			{
			dgp=dgp+mat[i][j];
			}
			if(i==4-1-j)
			{//0 e 3 1 e 2 2 e 1 3 e 0
			dgs=dgs+mat[i][j];
			}
			som=som+mat[i][j];
			
		}
		
		for(i=0; i<4; i++)
		{
			for(j=0; j<4; j++)
			{
				printf("%d ",mat[i][j]);
		//	printf("\n");
			}
			printf("\n");
		}
			
		printf("\nSoma da linha 2: %d ",sl2);
		printf("\nSoma da coluna 1: %d ",c1);
		printf("\nSoma da diagonal principal: %d ",dgp);
		printf("\nSoma da diagonal secundaria: %d ",dgs);
		printf("\nSoma total: %d ",som);
}
