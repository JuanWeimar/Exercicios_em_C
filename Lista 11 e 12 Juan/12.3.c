#include <stdio.h>
#include <stdlib.h>
main()
{
	int a,b,vet[10],i,q;
	printf("digite o valor de a\n");
	scanf("%d",&a);
	printf("digite o valor de b\n");
	scanf("%d",&b);
	printf("digite o tamanho do vetor\n");
	scanf("%d",&q);
	for(i=0; i<q; i++)
	{
	if(i%2==0)
		vet[i]=a;
	else
		vet[i]=b;
	printf("%d ",vet[i]);
	}
	
	system("pause");
}
