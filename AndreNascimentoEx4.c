/*
 * AndreNascimentoEx3e4.c
 *
 *  Created on: 27 de fev. de 2024
 *      Author: user
 */




#include <stdio.h>

void m(int len, int vet[]){
	int i;

	for(i = 0; i < len; i++){
		vet[i] *= 2;
	}
}

int main(){
	setbuf(stdout, NULL);

	int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int i;

	printf("Vetor antes da multiplicação:\n");

	for(i = 0; i < 10; i++){
		printf("%d - ", array[i]);
	}

	m(10, array);

	printf("\nVetor depois da multiplicação:\n");

	for(i = 0; i < 10; i++){
		printf("%d - ", array[i]);
	}

	return 0;
}
