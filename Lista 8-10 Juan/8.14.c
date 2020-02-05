#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
int i,tot,j,m;
float p1,p2,p3,c1,c2,c3,pp1,pp2,pp3;


	printf("digite votos do candidato 1\n");
	scanf("%f",&c1);
	printf("digite votos do candidato 2\n");
	scanf("%f",&c2);
	printf("digite votos do candidato 3\n");
	scanf("%f",&c3);
	
		tot=c1+c2+c3;
		
		p1=(c1/tot)*100;
		p2=(c2/tot)*100;
		p3=(c3/tot)*100;
		
		pp1 = p1/5;
		pp2 = p2/5;
		pp3 = p3/5;
	
		
	for(i=1; i<=pp1; i++){
		printf("*");
	}
		printf("%.f",p1);
		printf("\n");
		for(j=1; j<=pp2; j++){
		
			printf("*");
	}
			printf("%.f",p2);
			printf("\n");
			for(m=1; m<=pp3; m++){
				printf("*");
	}
				printf("%.f",p3);
				printf("\n");
		
		system("pause"); 
}



