#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
int a,b;
a=1;
b=2;
do{
	if(a==b){
		if(a<0)
		printf("A:%d\n",a);
		else
			if(b>0)
			printf("B:%d\n",b);
			else
			printf("A:%d\n",a);		
	}
	else
do{
	a=a+b;
	b=b+a;
	printf("A:%d B:%d\n",a,b);
}
while(a<=7);
	do{
	a=0;
	while(a<15)
		{
		a=a+b+1;
		printf("A:%d\n",a);
		}
	}
	while(b<=10);
		b=b+a;
	}
	while(b<=20);
		printf("B:%d\n",b);
}
