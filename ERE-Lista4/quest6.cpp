#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void intercala(vector<int>& vet, vector<int>& aux, int inicio, int meio, int fim){
    int i = inicio, j = meio;
    int k = 0;
    
    while((i < meio) and (j <= fim)){
        if(vet[i] <= vet[j]){
            aux[k++] = vet[i++];
        } else {
            aux[k++] = vet[j++];
        }
    }
    
    while(i < meio){
        aux[k++] = vet[i++];
    }
    
    while(j <= fim){
        aux[k++] = vet[j++];
    }



    int tamanho = fim - inicio + 1;    
    
    for(int i = 0; i < tamanho; i++){
        vet[inicio + i] = aux[i];
    }
    

    if(fim*2 < tamanho){
        intercala(aux, vet, inicio*2, meio*2, fim*2);
        
    }
    
}

void mergeiterativo(vector<int>& vetor){
    int tam = vetor.size();
    vector<int> aux(tam);
    int num_intercalacoes = -1;
    int p, r, b = 1;
    while(b < tam){
        p = 0;
        while(p + b < tam){
            r = p + 2*b - 1;
            if(r >= tam) r = tam - 1;
            intercala(vetor, aux, p, p+b, r);
            num_intercalacoes ++;
            p = p + 2*b;
        }
        b = 2*b;
    }
    
    
    if(num_intercalacoes % 2 != 0){
        for(int i = 0; i < tam; i++){
            vetor[i] = aux[i];
        }
    }
    
    

}

int main(){
    
    int tam;
    cin >> tam;
    
    vector<int> vetor(tam);

    for(int i = 0; i < tam; i++){
        cin >> vetor[i];
    }
    
    mergeiterativo(vetor);
    
    for(int i = 0; i < tam; i ++){
        cout << vetor[i] << " ";
    }

    return 0;
}
