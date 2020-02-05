#include <stdio.h>
#include <stdlib.h>
main()
{
	int vet[8],i,qn,j=0,n,k=0,k1=0;
	for(i=0; i<=7; i++)
	{
	scanf("%d",&qn);
	vet[i]=qn;
	}
	while(n>0)
	{

		scanf("%d",&n);
	for(i=0; i<=7; i++)
	{
	if(vet[i]==n)
	{
	printf("O indice e: %d\n", i);
	}
	if(vet[i]!=n)
	{
	printf("O codigo nao existe\n");
	}
	}
}
	system("pause");
}
