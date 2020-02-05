#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
float S,P,SF,PA;
printf("digite o salario mensal:\n");
scanf("%f",&S);
printf("digite o percentual de reajuste:\n");
scanf("%f",&P);
PA=S*(P/100);
SF=S+PA;
printf("Salario final:%f\n",SF);
}
