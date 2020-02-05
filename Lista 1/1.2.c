#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
float H,VH,NF,SF,PA;
printf("digite as horas trabalhadas:\n");
scanf("%f",&H);
printf("digite o valor por hora:\n");
scanf("%f",&VH);
printf("digite o numero de filhos:\n");
scanf("%f",&NF);
PA=H*VH*NF*0.02;
SF=(H*VH)+PA;
printf("Salario final:%f\n",SF);
}
