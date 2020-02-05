#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
float Cp,Ntv,Nrd,Cc,Nv1,Vl,Vpl,Tvl,Qml;
printf("digite o comprimento da pista\n");
scanf("%f",&Cp);
printf("digite o numero total de voltas\n");
scanf("%f",&Ntv);
printf("digite o numero de reabastecimentos desejados\n");
scanf("%f",&Nrd);
printf("digite o consumo de combustivel do carro\n");
scanf("%f",&Cc);
Nv1=Ntv/Nrd;
Vl=Ntv*(Cc*1000);
Vpl=Ntv*Cp;
Tvl=Vl/Vpl;
Qml=Tvl*Nv1;
printf("Quantidade minima de litros:%.2f\n",Qml);
system("pause");
}
