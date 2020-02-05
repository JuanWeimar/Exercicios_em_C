#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
float Pc,Pad,C,D,Prd,Nrepc,Nrepd,Tot,Totn,Trep;
printf("digite o percentual de reprovados na turma C:\n");
scanf("%f",&Pc);
printf("digite o percentual de aprovados na turma D\n");
scanf("%f",&Pad);
C=60;
D=20;
Prd=100-Pad;
Nrepc=C*(Pc/100);
Nrepd=D*(Prd/100);
Tot=C+D;
Totn=Nrepc+Nrepd;
Trep=(Totn/Tot)*100;
printf("Quantidade de reprovados em C:%.3f\n",Nrepc);
printf("Quantidade de reprovados em D:%.3f\n",Nrepd);
printf("Percentual de reprovados total:%.3f\n",Trep);
system("pause");
}
