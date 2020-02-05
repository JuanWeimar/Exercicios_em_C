#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
float Mid,Mfd,Qlc,Vr,mc,l,pc,Kp,Qg;
printf("digite a marcacao do inicio do dia\n");
scanf("%f",&Mid);
printf("digite a marcacao do fim do dia\n");
scanf("%f",&Mfd);
printf("digite a quantidade de litros de combustivel\n");
scanf("%f",&Qlc);
printf("digite o valor recebido\n");
scanf("%f",&Vr);
pc=2.5;
Kp=Mfd-Mid;
mc=Kp/Qlc;
Qg=Qlc*pc;
l=Vr-Qg;
printf("media de consumo:%.2f\n",mc);
printf("lucro total:%.2f\n",l);
system("pause");
}
