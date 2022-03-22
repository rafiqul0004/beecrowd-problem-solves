#include<stdio.h>
int main()
{
	int a,b,d,e;
	float c,f,k,g,h;
	scanf("%d%d%f",&a,&b,&c);
	scanf("%d%d%f",&d,&e,&f);
	g=b*c;
	h=e*f;
	k=g+h;
	
printf("VALOR A PAGAR: R$ %.2f\n",k);
return 0;
}
