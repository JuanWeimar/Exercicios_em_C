#include <stdio.h>
#include <stdlib.h>
main()
{
int i,n,v;
do
{
printf("digite o valor de n\n");
scanf("%d",&n);
printf("digite um valor\n");
scanf("%d",&v);
if(n>=v)
printf("Valores invalidos\n");
}
while(n>=v);
for (i=n; i<=v; i++)
{
printf("%d ",i);
}
system("pause");
}
