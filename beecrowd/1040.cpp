#include<stdio.h>
int main()
{
	float N1,N2,N3,N4,N5;
	double r,k;
	scanf("%f%f%f%f",&N1,&N2,&N3,&N4);
	r=((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
	printf("Media: %.1lf\n",r);
	if(r>=7.0)
	{
		printf("Aluno aprovado.\n");
	}
	else if(r<5.0)
	{
		printf("Aluno reprovado.\n");
	}
	else
	{
		printf("Aluno em exame.\n");
		scanf("%f",&N5);
		printf("Nota do exame: %.1f\n",N5);
		k=(r+N5)/2;
		if(k>5)
		{
			printf("Aluno aprovado.\n");
		}
		else
		{
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1lf\n",k);
	}
	return 0;
}
