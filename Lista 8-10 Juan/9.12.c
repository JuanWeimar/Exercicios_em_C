#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
int x,z,i,soma,j,an,c;
printf("digite o valor de X:\n");
scanf("%d",&x);
printf("digite o valor de Z:\n");
scanf("%d",&z);
soma=0;
c=0;
while(z<x)
{
printf("digite o valor de Z:\n");
scanf("%d",&z);
}
	for(i=1; i<=z; i++){
	if(soma<=z){
	soma=soma+x;
	x++;
	c++;}
	if(soma>z)
	break;
}
printf("total:%d\n",c);
system("pause");
}
