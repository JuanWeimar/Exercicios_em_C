#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
int n1,n2,i,soma;
soma=0;
	printf("digite o primeiro valor\n");
	scanf("%d",&n1);
	printf("digite o segundo valor\n");
	scanf("%d",&n2);
 	for(i=n1; i<=n2; i++){
 		soma=soma+i;
	 }
	 printf("soma:%d\n",soma);
}
