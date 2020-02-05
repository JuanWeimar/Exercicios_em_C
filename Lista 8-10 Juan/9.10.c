#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
int i,n,v;
n=0;
printf("digite um inteiro\n");
scanf("%d",&n);
while(n>0)
{
v=n;
printf("%d ",v);
for(i=n; i>=1; i=n-1){
	if(n==1)
	break;
	if(n%2==0)
	n=(n/2);
	else
	n=(3*n)+1;
	printf("%d ",n);
}
printf("\n");
printf("digite um inteiro\n");
scanf("%d",&n);
}
system("pause");
}
