#include <iostream>
using namespace std;

int main(){
    int tamanho;
    cin >> tamanho;
    int matriz[tamanho][tamanho];
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            cin >> matriz[i][j];
        }
    }
    int soma = 0, meio;
    if(tamanho % 2 == 0) {
        meio = (tamanho -1)/2;
        for(int i = 0; i <= meio; i++){
            for(int j = 0; j < i; j++){
                soma += matriz[i][j];
            }
        }
    
        for(int i = meio + 1 ; i < tamanho; i++){
            for(int j = 0; j < meio; j++){
                soma += matriz[i][j];
            }
            meio -= 1;
        }
    
    }else {
        int meio = tamanho/2;
        for(int i = 0; i < meio ; i++){
            for(int j = 0; j < i ; j ++){
                soma += matriz[i][j];
            }
        }
        
        for(int i = meio; i < tamanho; i++){
            for(int j = 0; j < meio; j ++){
                soma += matriz[i][j];
            }
            meio -= 1;
        }
    
    }
    
    
    
    cout << soma ;
    return 0;
}
