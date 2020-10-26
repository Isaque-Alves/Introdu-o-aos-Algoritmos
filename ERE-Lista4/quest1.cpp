#include <iostream>
using namespace std;


void shellsort(float vetor[],int tamanho){
    
    int gaps[5] = {1, 3, 7, 15, 31};
    int p_gap = 4;
    
    while(gaps[p_gap] > tamanho){
        p_gap --;
    }
    
    float valor;
    int j, alteracoes = 0;

    while(p_gap >= 0){
        int gap = gaps[p_gap];
        
        for(int i = gap; i < tamanho; i++){
            valor = vetor[i];
            j = i;
            while((j >= gap) and (valor < vetor[j - gap])){
                vetor[j] = vetor[j - gap];
                alteracoes ++;
                j = j - gap;
            }
            vetor[j] = valor;
            alteracoes ++;
        }
        
        cout << gap << ": ";
        for(int i = 0; i < tamanho; i++){
            cout << vetor[i] << " ";
        }
        cout << endl;
        
        p_gap --;
    }
    cout << alteracoes << endl;      

}

int main(){
    
    int tamanho;
    cin >> tamanho;
    float vetor[tamanho];
    
    for(int i = 0; i < tamanho; i++){
        cin >> vetor[i];
    }
    
    
    shellsort(vetor, tamanho);

    return 0;
}
