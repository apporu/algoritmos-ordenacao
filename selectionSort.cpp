#include <stdio.h>
// Algoritmo para implementar o Selection Sort em C

int vet[10] = {10,8,24,84,31,75,73,15,45,82}; 
// 10 Valores foram pr�-atribu�dos ao vetor para demonstra��o

void imprimeVetor(int vet[], int n) {
	for(int i = 0; i<10; i++) {
		printf("%d ",vet[i]);
	}
}
// Fun��o para imprimir o vetor.

// A fun��o recebe como par�metros o vetor em si (vet[]) e tamb�m o n�mero de elementos (n)
void selectionSort(int vet[], int n) {
	
	for(int i = 0; i < n; i++) {
		int menor = i; // Var�avel para guardar o menor valor, nesse caso considerando o primeiro valor.
		
		for(int x = i+1; x < n; x++) {
			if(vet[x] < vet[menor]) {
				menor = x; 
				// a var�avel 'menor' recebe o valor de x se um elemento menor for encontrado.
			}
		}
		
		// move o menor elemento para a posi��o correta (anterior)
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
