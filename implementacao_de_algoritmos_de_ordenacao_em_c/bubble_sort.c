#include <stdio.h>
#include <time.h>

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}



void bubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){ // compara elementos vizinhos e realiza trocas quando necessário
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){ // a cada passagem completa, o maior elemento restante é movido para o final
                int temp = arr[j]; 
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }  //  processo se repete até que todo o vetor esteja ordenado
    }
}

int main(){

    int arr[] = {30, 50, 20, 40, 10};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Array original:\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    clock_t inicio, fim;
    
    double tempo;

    inicio = clock();

    fim = clock();

    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Array ordenado:\n");
    printArray(arr, n);

    printf("Tempo de execucao: %f segundos\n", tempo);

    return 0;
}