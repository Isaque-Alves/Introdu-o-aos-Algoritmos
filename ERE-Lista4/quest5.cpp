#include <iostream>
using namespace std;


void intercala(int vet[], int inicio, int meio, int fim){
    int i = inicio, j = meio + 1;
    int tamanho = fim - inicio + 1 ;
    int aux[tamanho];
    
    for(int k = 0; k < tamanho; k++){
        if((i <= meio) and (j <= fim)){
            if(vet[i] <= vet[j]){
                aux[k] = vet[i];
                i++;
            } else {
                aux[k] = vet[j];
                j++;
            }
        } else if(i > meio){
            aux[k] = vet[j];
            j++;
        }else {
            aux[k] = vet[i];
            i ++;
        }
    }
    
    for(int k = 0; k < tamanho; k++){
        vet[inicio + k] = aux[k];
    }
}

void mergesort(int vet[], int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = (inicio + fim)/ 2;
        mergesort(vet, inicio, meio);
        mergesort(vet, meio + 1, fim);
        for(int i = inicio; i <= meio; i ++){
            cout << vet[i] << " ";
        }
        cout << "+ ";
        for(int i = meio + 1; i <= fim; i ++){
            cout << vet[i] << " ";
        }
        intercala(vet, inicio, meio, fim);
        cout << "= ";
        for(int i = inicio; i <= fim; i++){
            cout << vet[i] << " "; 
        }
        cout << endl;
    }

}

int main(){
    int tamanho;
    cin >> tamanho;
    int vet[tamanho];
    
    for(int i = 0; i < tamanho; i++) cin >> vet[i];
    
    mergesort(vet, 0, tamanho - 1);
    
    
    return 0;
}
