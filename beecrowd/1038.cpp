#include<stdio.h>
int main()
{
	int x,y;
	double a;
	scanf("%d%d",&x,&y);
	if(x==1)
	{
		a=4.00*y;
		printf("Total: R$ %.2lf\n",a);
	}
		if(x==2)
	{
		a=4.50*y;
		printf("Total: R$ %.2lf\n",a);
	}
		if(x==3)
	{
		a=5.00*y;
		printf("Total: R$ %.2lf\n",a);
	}
		if(x==4)
	{
		a=2.00*y;
		printf("Total: R$ %.2lf\n",a);
	}
		if(x==5)
	{
		a=1.50*y;
		printf("Total: R$ %.2lf\n",a);
	}
	return 0;
}
