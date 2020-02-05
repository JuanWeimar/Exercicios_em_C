#include <stdio.h>
#include <stdlib.h>
main()
{
int i,n,v,cod,t;
printf("digite de 1 a 10\n");
scanf("%d",&cod);
while(cod>=1 && cod<=10)
{
for (i=1; i<=10; i++)
{
printf("%d*%d=%d\n",i,cod,i*cod);
}
printf("digite de 1 a 10\n");
scanf("%d",&cod);
}
system("pause");
}
