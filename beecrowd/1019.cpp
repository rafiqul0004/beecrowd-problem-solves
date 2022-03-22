#include<stdio.h>
int main()
{
	int h,N,m,s;
	scanf("%d",&N);
	h=(N/3600);
	N=(N%3600);
	m=(N/60);
	s=(N%60);
	printf("%d:%d:%d\n",h,m,s);
	return 0;
}
