// Faça uma função que recebe, por parâmetro, 2 vetores de 10 elementos inteiros
// e que calcule e retorne, também por parâmetro, o vetor união dos dois primeiros.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void uniao(int vet_a[10], int vet_b[10]);

int main(){
	setlocale(LC_ALL, "Portuguese");

	int vet_a[10], vet_b[10];

	printf("Digite os elementos da vetor A: ");
	for(int i=0; i < 10; i++){
		printf("Elemento[%d] = ", i);
		scanf("%d", &vet_a[i]);
	}

	printf("Digite os elementos da vetor B: ");
	for(int i=0; i < 10; i++){
		printf("Elemento[%d] = ", i);
		scanf("%d", &vet_b[i]);
	}

	uniao(vet_a,vet_b);

	system("pause");
	return 0;
}

void uniao(int vet_a[10], int vet_b[10]){

	int uniao_ab[20];

	for (int i=0; i < 10; i++)
		uniao_ab[i] = vet_a[i];


	for (int i=0; i < 10; i++)
		uniao_ab[i + 10] = vet_b[i];

	// Ordenando o vetor da união
	for(int i=0; i < 20; i++){
		for(int j=i+1; j < 20; j++){
			if(uniao_ab[i] == uniao_ab[j]){
				uniao_ab[j] = 0;
			}
		}
	}
	// Exibição da união
	printf("União: \n");
	for(int i=0; i < 20; i++){
		if (uniao_ab[i] != 0){
			printf("%d ", uniao_ab[i]);
		}
	}

}
