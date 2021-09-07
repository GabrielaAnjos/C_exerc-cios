/* Faça um programa que faça operações simples com frações:
 * •Crie e leia duas frações p e q, compostas por numerador e denominador;
 * •Encontre o máximo divisor comum entre o numerador e o denominador, e simplifique as frações;
 * •Apresente a soma, a subtração, o produto, e o quociente entre as frações lidas.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// b
int mdc (int n1, int n2);
void fracao_simplificada(int num, int den);

// c
void soma(int num_p, int den_p, int num_q, int den_q);
void subtracao(int num_p, int den_p, int num_q, int den_q);
void produto(int num_p, int den_p, int num_q, int den_q);
void quociente(int num_p, int den_p, int num_q, int den_q);

int main(){
	setlocale(LC_ALL, "Portuguese");

	int num_p, den_p, num_q, den_q;

	printf("Digite o valor da fração p: ");
	scanf("%d%d", &num_p, &den_p);

	printf("Digite o valor da fração q: ");
	scanf("%d%d", &num_q, &den_q);

	if ((den_p != 0) && (den_q != 0)){
		printf("Fração p = %d/%d \n", num_p, den_p);
		printf("Fração q = %d/%d \n", num_q, den_q);

		printf("MDC (%d,%d) = %d\n", num_p, den_p, mdc(num_p,den_p));
		fracao_simplificada(num_p, den_p);

		printf("MDC (%d,%d) = %d\n", num_q, den_q, mdc(num_q,den_q));
		fracao_simplificada(num_q, den_q);

		printf("Operações entre frações: \n");
		soma(num_p, den_p, num_q, den_q);
		subtracao(num_p, den_p, num_q, den_q);
		produto(num_p, den_p, num_q, den_q);
		quociente(num_p, den_p, num_q, den_q);

	} else {
		printf("Valor do denominador inválido. \n");
	}
system("pause");
return 0;
}

// b
int mdc (int num, int den){
	int i=1, calc_mdc;

	while ( ((i<=num) && (i<=den)) ){
		if( (num % i == 0) && (den % i == 0) ){
			calc_mdc = i;
		}
		i++;
	}

	return calc_mdc;
}

void fracao_simplificada(int num, int den){
	int a, b;

		a = num / mdc(num,den);
		b = den / mdc(num,den);
	if (num != 0){
		printf("A fração simplificada é: %d/%d \n", a, b);
	} else {
		printf("A fração simplificada é: 0/%d \n", b);
	}
}

// c
void soma(int num_p, int den_p, int num_q, int den_q){
	int num, den;
	if (num_p != 0 && num_q != 0){
		num = (den_q*num_p) + (den_p*num_q);
		den = (den_p * den_q);

	} else if (num_p == 0){
		num = num_q;
		den = den_q;

	} else if (num_q == 0){
		num = num_p;
		den = den_p;
	}
	printf("p + q = %d/%d \n", num, den);
}

void subtracao(int num_p, int den_p, int num_q, int den_q){
	int num, den;
	if (num_p != 0 && num_q != 0){
		num = (den_q*num_p) - (den_p*num_q);
		den = (den_p * den_q);

	} else if (num_p == 0){
		num = num_q;
		den = den_q;

	} else if (num_q == 0){
		num = num_p;
		den = den_p;
	}
	printf("p - q = %d/%d \n", num, den);
}

void produto(int num_p, int den_p, int num_q, int den_q){
	int num, den;
	if (num_p != 0 && num_q != 0){
		num = (den_p * den_q);
		den = (num_q * num_p);

	} else if (num_p == 0){
		num = num_q;
		den = den_q;

	} else if (num_q == 0){
		num = num_p;
		den = den_p;
	}

	printf("p * q = %d/%d \n", num, den);
}

void quociente(int num_p, int den_p, int num_q, int den_q){
	int num, den;
	if (num_p != 0 && num_q != 0){
		num = (den_p * num_q);
		den = (den_q * num_p);

	} else if (num_p == 0){
		num = num_q;
		den = den_q;

	} else if (num_q == 0){
		num = num_p;
		den = den_p;
	}

	printf("p / q = %d/%d \n", num, den);
}
