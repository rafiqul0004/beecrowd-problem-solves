#include<stdio.h>
int main()
{
	char a[50];
	double b,c,k;
	scanf("%s",&a);
	scanf("%lf%lf",&b,&c);
	k=b+(c*0.15);
	printf("TOTAL = R$ %.2lf\n",k);
	return 0;
}
