#include<stdio.h>
int main()
{
	int R,A,B,C,G,M;
	scanf("%d",&R);
	A=R/365;
	B=R-(365*A);
	G=B/30;
	C=B-(G*30);
	printf("%d ano(s)\n",A);
	printf("%d mes(es)\n",G);
	printf("%d dia(s)\n",C);
	return 0;
}
