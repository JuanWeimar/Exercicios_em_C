#include <stdio.h>
#include <stdlib.h>
main()
{
	float j,num,Pi,par,m;
	float s=0;
	float i=1,n=4;
	scanf("%f",&num);
	while(num>0)
	{
	for(j=1,i=1;j<=num;j++,i=i+2)
	{		m=n/i;
		if(m>0.00001){
			if(par==0)
				{
				Pi=Pi+m;
				par=1;
			}
			else
				{
			if(par==1)
				Pi=Pi-m;
				par=0;
				}
			}
	}
	printf("soma:%.6f\n",Pi);
	par=0;
	Pi=0;
	scanf("%f",&num);
	}
	system("pause");
}
