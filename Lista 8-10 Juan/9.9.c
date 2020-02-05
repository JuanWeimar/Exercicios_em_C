#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
int i,c;
float sup;
sup=0;
c=0;
printf("digite a capacidade de suprimento\n");
scanf("%f",&sup);
for(i=sup; i>=1; i--){
	sup=sup/2;
	if(sup>0.5)
	{
	c++;
}
}
printf("quantidade de dias:%d\n",c);
}


