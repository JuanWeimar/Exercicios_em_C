#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
float C,L,A,Piso,Teto,Parede1,Parede2,Atotal,Ncaixas;
printf("digite o comprimento:\n");
scanf("%f",&C);
printf("digite a largura:\n");
scanf("%f",&L);
printf("digite a altura:\n");
scanf("%f",&A);
//Piso=L*C;
//Teto=Piso;
Parede1=(L*A)*2;
Parede2=(C*A)*2;
Atotal=Parede1+Parede2;
Ncaixas=Atotal/1.5;
printf("numero de caixas:%.2f\n",Ncaixas);
system("pause");
}
