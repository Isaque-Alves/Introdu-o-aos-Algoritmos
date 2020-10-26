#include <iostream>
using namespace std;


void shellsort(int valores[],int tamanho){
    int interacoes = 0;
    int p_gap;
    cin >> p_gap;
    
    int gaps[p_gap];
    for(int i = 0; i < p_gap; i++) cin >> gaps[i];
    
    interacoes ++;
    p_gap -= 1;
    while(gaps[p_gap] > tamanho){
        p_gap --;
        interacoes++;
    }
    
    int valor;
    int j;
    
    interacoes ++;
    while(p_gap >= 0){
        int gap = gaps[p_gap];
        
        interacoes ++;
        for(int i = gap; i < tamanho; i++){
            valor = valores[i];
            j = i;
            interacoes ++;
            while((j >= gap) and (valor > valores[j - gap])){
                interacoes ++;
                valores[j] = valores[j - gap];
                j = j - gap;
            }
            interacoes ++;
            valores[j] = valor;
        }
    
        p_gap --;
        interacoes ++;
    }
    cout << interacoes << endl;
}


int main(){
    int tamanho;
    cin >> tamanho;
    
    int valores[tamanho];
    for(int i = 0; i < tamanho; i++) cin >> valores[i];
    
    shellsort(valores, tamanho);

    return 0;
}
