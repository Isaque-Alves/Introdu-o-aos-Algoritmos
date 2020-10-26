#include <iostream>

using namespace std;

void selection_sort(int vetor[], int inicio, int tamanho){
    int menor;
    int aux;
    for(int indice = inicio; indice < tamanho - 1; indice++){
        menor = indice;
        for(int j = indice + 1; j < tamanho; j++){
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        aux = vetor[indice];
        vetor[indice] = vetor[menor];
        vetor[menor] = aux;
    }
}

int particiona(int vetor[], int c, int f){
    int pivo = vetor[c], i = c+1, j = f;
    while(i <= j){
        if(vetor[i] <= pivo){
             i++;
        } else if(pivo <= vetor[j]){
             j--;
        }else{
            swap(vetor[i], vetor[j]);
            i++;
            j--;
        }
    }
    
    vetor[c] = vetor[j];
    vetor[j] = pivo;
    return j;
}

void quicksort(int vetor[], int pos_pivo, int fim, int M){
    int pos_novo_pivo;
    if(pos_pivo < fim){
        pos_novo_pivo = particiona(vetor, pos_pivo, fim);
        if(pos_novo_pivo - pos_pivo - 1 >= M){
            quicksort(vetor, pos_pivo, pos_novo_pivo - 1, M);
        }else {
            selection_sort(vetor, pos_pivo, pos_novo_pivo);
        }
        
        if(fim - pos_novo_pivo + 1 >= M){
            quicksort(vetor, pos_novo_pivo + 1, fim, M);
        }else {
            selection_sort(vetor, pos_novo_pivo + 1, fim);
        }
    }
}


int main(){
    int M;
    cin >> M;
    int tamanho;
    cin >> tamanho;
    int vetor[tamanho];

    for(int i = 0; i < tamanho; i++) cin >> vetor[i];
        
    quicksort(vetor, 0, tamanho-1, M);

    for(int i = 0; i < tamanho; i ++){
        cout << vetor[i] << " ";
    }

    return 0;
}
