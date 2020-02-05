#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
int n1,n2;
printf("digite um valor\n");
scanf("%d",&n1);
printf("digite outro valor\n");
scanf("%d",&n2);
while(n1==n2)
{
printf("digite outro valor\n");
scanf("%d",&n2);
}
if(n1>n2)
printf("%d\n",n1);
else
printf("%d\n",n2);
system("pause");
}
