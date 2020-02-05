#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
int a,b;
a=0;
b=0;
while(a==b)
{
do{
	if(a<2)
	{
		if(b<2){
		printf("A:%d\n",a);
		}
		else
		a=a+5;
		b=b+2;
	}
	if(a>2)
	
		printf("A:%d B:%d\n",a,b);
		if(a>b)
		b=b+a;
		
}
while(b<=8);
printf("B:%d\n",b);
}
}
