#include <stdio.h>
#include <stdlib.h>
main()
{
	int vet[10],i,q,aux,ref,vet1[10],qn;
	printf("digite o tamanho do vetor\n");
	scanf("%d",&q);
	printf("digite o ano de referencia\n");
	scanf("%d",&ref);
	for(i=0; i<q; i++)
	{
//	printf("digite um ano de nascimento");
	scanf("%d",&qn);
	vet[i]=qn;
	aux=ref-vet[i];
	vet1[i]=aux;
	printf("%d ",vet1[i]);
	}
	system("pause");
}

	
