// Crie um programa que lê 6 valores inteiros
// em seguida, mostre na tela os valores lidos na ordem inversa da leitura.

#include <stdio.h>

int main(){

	int v[6];

	for(int i=0; i<6; i++){
		printf("Digite um valor inteiro[%d]: ", i);
		scanf("%d", &v[i]);
	}

	printf("\n Valores lidos na ordem inversa da leitura: \n");
	for(int i=5; i>=0; i--){
		printf("número[%d] = %d \n", i, v[i]);
	}
	system("pause");
	return 0;
}
