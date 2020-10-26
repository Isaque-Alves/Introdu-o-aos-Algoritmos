#include <iostream>
using namespace std;


int hoare(int vet[], int lo, int hi ){
    int pivo = vet[lo + (hi - lo) / 2];
    int i = lo - 1;
    int j = hi + 1;
    while(true){
        do {
            i++;
        }while (vet[i] < pivo);
        do {
            j--;
        }while (vet[j] > pivo);
        if(i >= j){
            cout << pivo << ": ";
            return j;
        }
        swap(vet[i], vet[j]);
    }
}

void quicksort(int vet[], int pos_pivo, int fim){
    int pos_novo_pivo;
    if(pos_pivo < fim){
        pos_novo_pivo = hoare(vet, pos_pivo, fim);
        for(int i = pos_pivo; i <= fim; i++){
            cout << vet[i] << " ";
        }
        cout << endl;
        quicksort(vet, pos_pivo, pos_novo_pivo);
        quicksort(vet, pos_novo_pivo + 1, fim);
    }
}

int main(){
    int tamanho;
    cin >> tamanho;
    
    int vet[tamanho];
    for(int i = 0; i < tamanho; i++) cin >> vet[i];
    
    quicksort(vet, 0, tamanho - 1);
    
    for(int i = 0; i < tamanho; i++){
        cout << vet[i] << " "; 
    }

    return 0;
}
