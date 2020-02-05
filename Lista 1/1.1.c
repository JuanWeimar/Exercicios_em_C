#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
float A,B,T,Q,R,C,Ci;
printf("digite a base A:\n");
scanf("%f",&A);
printf("digite a base B:\n");
scanf("%f",&B);
printf("digite o raio C:\n");
scanf("%f",&C);
T=A*B/2;
Q=B*B;
R=A*B;
Ci=3.14*(C*C);
printf("Area do triangulo:%f\n",T);
printf("Area do quadrado:%f\n",Q);
printf("Area do retangulo:%f\n",R);
printf("Area do circulo:%f\n",Ci);
}
