#include <stdio.h>
main()
{
	char car1,car2;
	int i,n,c=0,j;
	printf("digite um numero\n");
	scanf("%d",&n);
	printf("digite um caractere\n");
	scanf("\n%c",&car1);
	printf("digite outro caractere\n");
	scanf("\n%c",&car2);
	for(i=1; i<=4; i++)
	{
		if(i==1)
		for(j=1; j<=9; j++)
		{
		if(j<5)
		printf("%c",car2);
		if(j==5)
		printf("%c",car1);
		if(j>5)
		printf("%c",car2);
		}
		printf("\n");
		
		if(i==2)
		for(j=1; j<=9; j++)
		{
		if(j<4)
		printf("%c",car2);
		if(j>=4 && j<=6)
		printf("%c",car1);
		if(j>6)
		printf("%c",car2);
		}
		printf("\n");
		
		if(i==3)
		for(j=1; j<=9; j++)
		{
		if(j<3)
		printf("%c",car2);
		if(j>=3 && j<=7)
		printf("%c",car1);
		if(j>7)
		printf("%c",car2);
		}
		printf("\n");
		
		if(i==4)
		for(j=1; j<=9; j++)
		{
		if(j<2)
		printf("%c",car2);
		if(j>=2 && j<=8)
		printf("%c",car1);
		if(j>8)
		printf("%c",car2);
		}
	}
}
