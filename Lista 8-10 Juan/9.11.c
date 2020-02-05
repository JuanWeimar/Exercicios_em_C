#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
int a,n,i,soma,j,an;
printf("digite o valor de A:\n");
scanf("%d",&a);
printf("digite o valor de N:\n");
scanf("%d",&n);
soma=0;
while(n<=0)
{
printf("digite o valor de N:\n");
scanf("%d",&n);
}
	for(i=1; i<=n; i++){
	soma=soma+a;
	a++;
}
printf("soma:%d\n",soma);
system("pause");
}
