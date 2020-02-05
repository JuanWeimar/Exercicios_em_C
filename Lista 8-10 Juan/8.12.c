#include <stdio.h>
#include <stdlib.h>
main()
{
int i,n,v,cod;
printf("digite 1.crescente e 2.decrescente\n");
scanf("%d",&cod);
while(cod==1 || cod==2)
{
printf("digite o valor de n\n");
scanf("%d",&n);
printf("digite um valor\n");
scanf("%d",&v);
if(cod==1)
{
if (n>v)
for (i=v; i<=n; i++)
{
printf("%d ",i);
}
else
for (i=n; i<=v; i++)
{
printf("%d ",i);
}
}
if(cod==2)
{
if(n<v)
for (i=v; i>=n; i--)
{
printf("%d ",i);
}
else
for (i=n; i>=v; i--)
{
printf("%d ",i);
}
}
printf("\ndigite 1.crescente e 2.decrescente\n");
scanf("%d",&cod);
}
system("pause");
}
