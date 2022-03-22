#include<stdio.h>
#include<math.h>
int main()
{
	double X1,X2,Y1,Y2,d;
	scanf("%lf%lf%lf%lf",&X1,&Y1,&X2,&Y2);
	d=sqrt(((X2-X1)*(X2-X1))+((Y2-Y1)*(Y2-Y1)));
	printf("%.4lf\n",d);
	return 0;
}
