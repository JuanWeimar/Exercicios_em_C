#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
int i,soma,a=1,b=1;
soma=0;
printf("0 1 1 ");
 	for(i=3; i<20; i++){
 		soma=a+b;
 		printf("%d ",soma);
 		b=a;
 		a=soma;
}}
