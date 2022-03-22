#include<stdio.h>
int main()
{
	int n,m=0,i;
	scanf("%d",&n);
	for(i=1;i<11;i++)
	{
		m=n*i;
		printf("%d x %d = %d\n",i,n,m);
	}
	return 0;
}
