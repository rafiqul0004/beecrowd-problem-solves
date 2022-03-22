#include<stdio.h>
int main()
{
	int a,n=0;
	float i;
	for(a=0;a<6;a++)
	{
		scanf("%f",&i);
		if(i>=0) n++;
	}
	printf("%d valores positivos\n",n);
	return 0;
}
