#include <stdio.h>
#include <stdlib.h>
#include  <time.h>

int recolherChutes(int* chutes) {
	for (int i = 0; i <= 5; i++) {
		scanf(" %d", &chutes[i]);
	}
	return *chutes;
}

   int sorteio(int* numeros) {
	srand(time(0));
	int n;
	for (int i = 0; i <= 5; i++) {
		do {
		 n = rand() % 100;

		} while (n <= 0);

		numeros[i] = n;
	}

	return *numeros;
}

int main()
{
	int chutes[5];
	int numeros[5];
	int awnser = 0;
	printf("Simulador Realista de loteria\n");
	printf("A mesma dificuldade, porem com nenhum premio\n");
while (1)
{
	printf("Diga seu palpite, 6 numeros de 1 a  99\n");

	recolherChutes(chutes);

	printf("\nSeu chute foi: %d %d %d %d %d %d", chutes[0], chutes[1], chutes[2], chutes[3], chutes[4], chutes[5]);

	sorteio(numeros);

	printf("\nOs numeros sorteados foram: %d %d %d %d %d %d", numeros[0], numeros[1], numeros[2], numeros[3], numeros[4], numeros[5]);

	printf("\nGostaria de simular outra vez? 1- para sim, e qualquer coisa para nao\n");
	scanf("%d", &awnser);
	if(awnser == 1)
	{
		awnser = 0;
		continue;
	}else
	{
		printf("\nObrigado por jogar!!\n");
		break;
	}

}

	return 0;
}

