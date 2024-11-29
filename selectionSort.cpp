#include <stdio.h>
// Algoritmo para implementar o Selection Sort em C

int vet[10] = {10,8,24,84,31,75,73,15,45,82}; 
// 10 Valores foram pré-atribuídos ao vetor para demonstração

void imprimeVetor(int vet[], int n) {
	for(int i = 0; i<10; i++) {
		printf("%d ",vet[i]);
	}
}
// Função para imprimir o vetor.

// A função recebe como parâmetros o vetor em si (vet[]) e também o número de elementos (n)
void selectionSort(int vet[], int n) {
	
	for(int i = 0; i < n; i++) {
		int menor = i; // Varíavel para guardar o menor valor, nesse caso considerando o primeiro valor.
		
		for(int x = i+1; x < n; x++) {
			if(vet[x] < vet[menor]) {
				menor = x; 
				// a varíavel 'menor' recebe o valor de x se um elemento menor for encontrado.
			}
		}
		
		// move o menor elemento para a posição correta (anterior)
		int temp = vet[i]; 
		vet[i] = vet[menor];
		vet[menor] = temp;
	} 
}

int main() {
	// Imprime o vetor original
	printf("Vetor original:\n");
	imprimeVetor(vet, 10);
	
	// Reordena o vetor em ordem crescente utilizando o procedimento
	selectionSort(vet, 10);
	
	printf("\n");
	
	// Imprime o vetor reordenado
	printf("\nVetor reordenado:\n");
	imprimeVetor(vet, 10);
	
return 0;
}
