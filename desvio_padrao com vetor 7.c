#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int i = 0;
	float soma = 0;
	float media_a = 0;
	float erro[10] = {0.005, 0.003, 0.3, 0.007, 0.1, 0.055, 0.4, 0.003, 0.001, 0.0015};
	int n = 10;
	float media;
	float valor_f;
	float media1;
	
	for(i=0; i<10 ; i++)
	{
		printf("DIGITE O VALOR n %d do vetor: ", i+1);
		scanf("%f",&erro[i]);
	}
	
	for(i = 0; i <= 9; i++)      
	{	
		soma = soma + erro[i];
		
	}
	media_a = soma / n;
	
	for(i = 0; i < 10; i++)
	{
		media = media + (erro[i] - media_a) * (erro[i] - media_a);
	}
	media1 = media / n;
	
	valor_f = sqrt(media1);
	
	printf("Desvio padrao do valores: %f\n", valor_f);
	
	system("pause");
	return 0;
}

