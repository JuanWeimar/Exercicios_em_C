#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
int i,soma,n;
soma=1;
	printf("digite um valor:\n");
	scanf("%d",&n);
	while(n<0)
	{
	printf("digite um valor:\n");
	scanf("%d",&n);	
	}
	
 	for(i=1; i<=n; i++){
 		soma=soma*i;
 		}
printf("fatorial:%d\n",soma);
}
