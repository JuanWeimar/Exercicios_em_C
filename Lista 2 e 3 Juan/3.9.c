#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
int x,y;
printf("digite o primeiro valor\n");
scanf("%d",&x);
printf("digite o segundo valor\n");
scanf("%d",&y);
	if(x>0){
		if(y>0)
	printf("I\n");
}
	if(x<0){
		if(y>0)
	printf("II\n");
}
	if(x<0){
		if(y<0)
	printf("III\n");
}
	if(x>0){
		if(y<0)
	printf("IV\n");
}
system("pause");
}
