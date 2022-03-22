#include<stdio.h>
int main()
{
	int i,c=0;
	double a, sum=0,avg;
	for(i=1;i<=6;i++)
	{
		scanf("%lf",&a);
		if(a>0)
		{
			c++;
			sum=sum+a;
			avg=sum/c;
		}
	}
	printf("%d valores positivos\n",c);
	printf("%.1lf\n",avg);
	return 0;
}
