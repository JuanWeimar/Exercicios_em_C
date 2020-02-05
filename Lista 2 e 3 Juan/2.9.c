#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
float id,h,ph,pf;
printf("digite um 1 para mulher ou 2 para homem\n");
scanf("%f",&id);
printf("digite a altura\n");
scanf("%f",&h);
if(id==2)
{
ph=(72.7*h)-58;
printf("peso masculino:%.2f \n",ph);
}
else
{
pf=(62.1*h)-44.7;
printf("peso feminino:%.2f\n",pf);
}
system("pause");
}
