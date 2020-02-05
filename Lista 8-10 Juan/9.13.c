#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
    float A,B;
    
    int anos = 0;
    scanf("%f",&A);
    scanf("%f",&B);
    while(A < B) {

        A = A+(A * 0.052);
        B = B+(B * 0.018);
        anos++;
    }
    printf("Populacao A: %f\n", A);
    printf("Populacao B: %f\n", B);
	printf("Quantidade de anos: %d\n", anos);
}
