#include <stdio.h>
main()
{
	int vg[13],mat[13][3],i,j,k,acertos=0,cs=0,cdup=0,ctr=0,soma=0;
	
	printf("\nDigite valores do vetor\n");
	 
	for(i=0; i<13; i++)
	{
		scanf("%d",&vg[i]);
	}
	
	printf("\nDigite valores para matriz\n");
	
	for(i=0; i<13; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("\nElemento[%d][%d] = ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}

	printf("\nAcertos\n");
	
	for(k=0; k<13; k++)
	{
		if(1==mat[k][vg[k]-1])
		{
			printf("\nParticipação: %d\n",k);
			acertos++;
			printf("Acertos: %d\n",acertos);
		}
	}
	
	for(i=0; i<13; i++)
	{
		for(j=0; j<3; j++)
		{
			soma=soma+mat[i][j];
		}
		if(soma==1)
		{
			cs++;
		}
		if(soma==2)
		{
			cdup++;
		}
		if(soma==3)
		{
			ctr++;
		}
		soma=0;
	}
	
	printf("\n%d: Pontos\n",acertos);
	printf("%d: Simples\n",cs);
	printf("%d: Duplas\n",cdup);
	printf("%d: Triplas\n",ctr);
}
