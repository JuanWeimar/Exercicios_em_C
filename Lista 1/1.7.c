#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
float Qe,Qb,Qn,Pb,Pn,Pv,Qv;
printf("digite a quantidade de eleitores:\n");
scanf("%f",&Qe);
printf("digite a quantidade de votos brancos\n");
scanf("%f",&Qb);
printf("digite a quantidade de votos nulos\n");
scanf("%f",&Qn);
printf("digite a quantidade de votos validos\n");
scanf("%f",&Qv);
Pb=(Qb/Qe)*100;
Pn=(Qn/Qe)*100;
Pv=(Qv/Qe)*100;
printf("Percentual de votos brancos:%.3f\n",Pb);
printf("Percentual de votos nulos:%.3f\n",Pn);
printf("Percentual de votos validos:%.3f\n",Pv);
system("pause");
}
