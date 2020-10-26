#include <iostream>
using namespace std;

int main(){
    int tamanho;
    cin >> tamanho;
    int vet[tamanho];
    for(int i = 0; i < tamanho; i++) cin >> vet[i];
    int valor,p = -1;
    cin >> valor;
    for(int i = 0; i < tamanho; i++){
        if(valor == vet[i]){
            vet[i] = -1;
            p = i;
            i = tamanho;
        }
    }
    if(p!= -1){
        for (int i = p; i < tamanho -1 ; i++){
            vet[i] = vet[i+1];
        }
        vet[tamanho] = -1;
        for(int i = 0; i < tamanho-1; i++){
            cout << vet[i] << " ";
        }
        
    }else{
        cout << "ELEMENTO NAO ENCONTRADO" << endl;
    }
    
    
    return 0;
}
