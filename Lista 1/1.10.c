#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
float Qep,Vs,Pcb,Qbv,Pdb,Pfb,Com,Comt,Si,Sf,l;
printf("digite a quantidade de empregados da loja\n");
scanf("%f",&Qep);
printf("digite o valor do salario minimo\n");
scanf("%f",&Vs);
printf("digite o preço de custo de cada bicicleta\n");
scanf("%f",&Pcb);
printf("digite a quantidade de bicicletas vendidas\n");
scanf("%f",&Qbv);
Vs=Vs*2;
Pdb=Pcb*0.5;
Pfb=Pdb+Pcb;
Com=Pcb*0.15;
Comt=Com*Qbv;
Si=Comt/Qep;
Sf=Si+Vs;
l=Qbv*(Pfb-Pcb)-(Sf*Qep);
printf("salario final de cada empregado:%.2f\n",Sf);
printf("lucro total:%.2f\n",l);
system("pause");
}
