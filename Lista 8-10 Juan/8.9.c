#include <stdio.h>
#include <stdlib.h>
main()
{
int i,n,v;
printf("digite o valor de n\n");
scanf("%d",&n);
while(n>0){
printf("digite um valor\n");
scanf("%d",&v);

for (i=1; i<=n; i++)
{
printf("%d ",v);
}
printf("digite o valor de n\n");
scanf("%d",&n);
}

system("pause");
}
